service mysql start

chown -R www-data /var/www/*
chmod -R 755 /var/www/*

ln -s /etc/nginx/sites-available/localhost /etc/nginx/sites-enabled/
rm -rf /etc/nginx/sites-enabled/default

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

mkdir /var/www/localhost
tar -xvf phpMyAdmin-4.9.0.1.tar.gz
mv -f phpMyAdmin-4.9.0.1 /var/www/localhost/phpmyadmin
mv /var/config.inc.php /var/www/localhost/phpmyadmin/

tar -xvf wordpress-5.4.1.tar.gz
mv -f wordpress/ /var/www/localhost
mv /var/wp-config.php /var/www/localhost/wordpress

service php7.3-fpm start
service nginx start

bash
