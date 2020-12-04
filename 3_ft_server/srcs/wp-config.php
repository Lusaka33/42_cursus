<?php

/**
 * The base configuration for WordPress
 *
 * The wp-config.php creation script uses this file during the
 * installation. You don't have to use the web site, you can
 * copy this file to "wp-config.php" and fill in the values.
 *
 * This file contains the following configurations:
 *
 * * MySQL settings
 * * Secret keys
 * * Database table prefix
 * * ABSPATH
 *
 * @link https://wordpress.org/support/article/editing-wp-config-php/
 *
 * @package WordPress
 */

// ** MySQL settings - You can get this info from your web host ** //
/** The name of the database for WordPress */
define('DB_NAME', 'wordpress');

/** MySQL database username */
define('DB_USER', 'root');

/** MySQL database password */
define('DB_PASSWORD', '');

/** MySQL hostname */
define('DB_HOST', 'localhost');

/** Database Charset to use in creating database tables. */
define('DB_CHARSET', 'utf8');

/** The Database Collate type. Don't change this if in doubt. */
define('DB_COLLATE', '');

/**#@+
 * Authentication Unique Keys and Salts.
 *
 * Change these to different unique phrases!
 * You can generate these using the {@link https://api.wordpress.org/secret-key/1.1/salt/ WordPress.org secret-key service}
 * You can change these at any point in time to invalidate all existing cookies. This will force all users to have to log in again.
 *
 * @since 2.6.0
 */
define('AUTH_KEY',         '-8JEw9qn1{ 9s@>y ?Kiw+8Sp{y9ktTl:,@^ 1vD5h.NkD/Ju]2G]sT:tDux[t7+');
define('SECURE_AUTH_KEY',  'f*=DL3P2-NnzLcG&d#z[9WAA^bj(=6TBV1^`$8b%!LO!vxl!VrJ}7s0TN5XpFG,<');
define('LOGGED_IN_KEY',    '`16 :^o]tu.D+F`P6GF:[fbXuT[.^+FM/+yTE?SgXIf??D;a2,Ks?M]<*iwk|-U7');
define('NONCE_KEY',        'M}0ejir?1teYl#Y&?T4}lCM&J.L5tlV4Oox(`*/|CSlXsw3yQzY^Wd^Bt@n#}Wu{');
define('AUTH_SALT',        '?p)3+RC2ze7!T|^)8krd-S#L_{.?0QXUND@_{-0~YZO)aJW:Yqgjj{|:A_Nth}&!');
define('SECURE_AUTH_SALT', '{.X+s!xxELNA@%L4*^e|ZzJZQpC5WNbQ&/u+0JU:^Vei#^aC3#8yoE3d5,2_ZX,X');
define('LOGGED_IN_SALT',   ')2mgG^b+;gYn7UGNf-=c+hkbQ(sic`v`pVd|MGvm}Qu[z&R>g(syBZxTXEBw#]ee');
define('NONCE_SALT',       'F><y^<MO6`mDIp`/_g1Yl}V)-6MyYndokl|-#x*$k.-R(LRz~Z^f}$Wvi>MAT}Cv');


/**#@-*/

/**
 * WordPress Database Table prefix.
 *
 * You can have multiple installations in one database if you give each
 * a unique prefix. Only numbers, letters, and underscores please!
 */
$table_prefix = 'wp_';

/**
 * For developers: WordPress debugging mode.
 *
 * Change this to true tao enable the display of notices during development.
 * It is strongly recommended that plugin and theme developers use WP_DEBUG
 * in their development environments.
 *
 * For information on other constants that can be used for debugging,
 * visit the documentation.
 *
 * @link https://wordpress.org/support/article/debugging-in-wordpress/
 */
define('WP_DEBUG', false);

/* That's all, stop editing! Happy publishing. */

/** Absolute path to the WordPress directory. */
if (!defined('ABSPATH')) {
	define('ABSPATH', __DIR__ . '/');
}

/** Sets up WordPress vars and included files. */
require_once ABSPATH . 'wp-settings.php';
