# 0. Dockerfile
#    - Docker exécutera les instructions ci-dessous dans l'ordre
#    - Les lignes de commentaire qui commencent par # sont supprimées avant l'exécution des instructions du Dockerfile
# 1. FROM
#    - un Dockerfile valide doit commencer par une instruction FROM.
#    - initialise une nouvelle étape de construction et définit l'image de base pour les instructions ultérieures.

FROM debian:buster

# 2. LABEL
#    - ajoute des métadonnées à une image.
#    - remplace l'instruction dépréciée MAINTAINER.
#    - pour voir les étiquettes, utilisez la commande "docker image inspect".

LABEL maintainer="adrossig@students.42.fr"

# 3. RUN
#    - exécute des commandes dans un nouveau calque au-dessus de l'image courante et transmet les résultats
#    - backslash(\) peut être utilisé pour continuer une seule instruction RUN sur la ligne suivante.
#    - Combinez toujours RUN apt-get update et apt-get install dans la même instruction RUN pour éviter les problèmes de mise en cache.

RUN    	apt-get update && apt-get install -y \
    	nginx \
    	mariadb-server \
    	php-fpm \
    	php-mysql \
    	php-cli \
    	php-mbstring \
    	openssl \
    	vim

# 4. COPY
#    - ajoute des fichiers à partir du répertoire spécifié de votre client Docker.

COPY    srcs/nginx.conf /etc/nginx/sites-available/localhost
COPY    srcs/config.inc.php /var
COPY    srcs/wp-config.php /var
COPY    srcs/phpMyAdmin-4.9.0.1.tar.gz ./
COPY    srcs/wordpress-5.4.1.tar.gz ./
COPY    srcs/init.sh ./

# 5. EXPOSE
#    - informe Docker que le conteneur écoute sur les ports du réseau spécifiés au moment de l'exécution.
#    - indépendamment des paramètres EXPOSE, vous pouvez les remplacer à l'exécution en utilisant le drapeau -p comme `docker run -p 80:80/tcp -p 80:80/udp ...`.

EXPOSE  80 443

# 6. CMD
#    - définit la commande à exécuter lors de l'exécution de l'image.
#    - n'exécute rien au moment de la construction, tandis que RUN exécute une commande et commet le résultat.
#    - s'il y a plus d'un CMD dans un Dockerfile, seul le dernier sera effectif.

CMD		bash init.sh
