#!bin/bash

service mysql start

chown -R www-data /var/www/*
chmod -R 755 /var/www/*

ln -s /etc/nginx/sites-avialable/localhost /etc/nginx/sites-enabled/
rm -fr /etc/nginx/sites-enabled/default

mkdir /etc/nginx/ssl
openssl req -newkey rsa:4096 -sha256 -days 365 -nodes \
			-out /etc/nging/ssl/localhost.pem \
			-keyout /etc/nginx/ssl/localhost.key \
			-subj "/C=BE/ST=Brussels/L=Brussels/O=19Belgium/OU=cadet/CN=localhost"

echo "CREATE DATABASE wordpress;" \
			| mysql -u root --skip-password
echo "UPDATE mysql.user SET plugin = 'mysql_native_password' WHERE user='root';" \
			| mysql -u root --skip-password
echo "GRANT ALL PRIVILEGES ON wordpress.* to 'root'@'localhost';" \
			| mysql -u root --skip-password
echo "FLUSH PRIVILEGES" \
			| mysql -u root --skip-password

path="/var/www/localhost"

mkdir ${path}
tar -xvf phpMyAdmin-5.0.4.tar.gz
mv -f phpMyAdmin-5.0.4 ${path}/phpmyadmin
mv /var/config.inc.php ${path}/phpmyadmin/

tar -xvf wordpress-5.5.3.tar.gz
mv -f wordpress/ ${path}
mv /var/wp-config.php ${path}/wordpress

rm *.tar.gz

service php7.3-fpm start
service nginx start

bash
