#Certificat SSL
mkdir /etc/nginx/ssl
openssl req -newkey rsa:4096 -sha256 -days 365 -nodes \
			-out /etc/nging/ssl/localhost.pem \
			-keyout /etc/nginx/ssl/localhost.key \
			-subj "/C=BE/ST=Brussels/L=Brussels/O=19Belgium/OU=cadet/CN=localhost"

#NGINX
mkdir var/www/localhost
mv ./nging.conf etc/nginx/sites-available
ln -s etc/nginx/sites-available/default etc/nginx/sites-enabled
chown -R www-data /var/www/*
chmod -R 755 /var/www/*

#MYSQL
echo "CREATE DATABASE wordpress;" \
			| mysql -u root --skip-password
echo "UPDATE mysql.user SET plugin = 'mysql_native_password' WHERE user='root';" \
			| mysql -u root --skip-password
echo "GRANT ALL PRIVILEGES ON wordpress.* to 'root'@'localhost';" \
			| mysql -u root --skip-password
echo "FLUSH PRIVILEGES" \
			| mysql -u root --skip-password

path="/var/www/localhost"

#PHPMYADMIN
mkdir ${path}
wget https://files.phpmyadmin.net/phpMyAdmin/4.9.0.1/phpMyAdmin-4.9.0.1-all-languages.tar.gz
tar xvf phpMyAdmin-4.9.0.1-all-languages.tar.gz
mv phpMyAdmin-4.9.0.1-all-languages var/www/localhost/phpmyadmin
mv ./config.inc.php var/www/localhost/phpmyadmin
chmod 660 /var/www/localhost/phpmyadmin/config.inc.php
chown -R www-data:www-data /var/www/localhost/phpmyadmin

#WORDPRESS
wget https://wordpress.org/latest.tar.gz
tar xvf latest.tar.gz
mkdir ${path}/wordpress
cp -a wordpress/. ${path}/wordpress
mv -f wordpress/ ${path}
mv ./wp-config.php ${path}/wordpress

#SERVICES
service nginx start
service mysql start
service php7.3-fpm start
sleep infinity
