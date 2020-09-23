/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_char.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrossig <adrossig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/23 13:55:08 by adrossig          #+#    #+#             */
/*   Updated: 2020/09/23 16:08:06 by adrossig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
** Imprime un caractère selon les instructions de formatage
** (une chaîne de caractère peut donc être imprimée).
** =========
** #1 : un format.
** #2 : le caractère à imprimer.
** =========
** Retourne le nombre de caractère imprimés
** suite au formatage.
*/

int		ft_put_formatted_char(t_format format, char c)
{
	int		nbr_space;
	char	*printed;
	char	*to_add;
	int		len;

	if (format.width == 0)
		nbr_space = 0;
	else
		nbr_space = format.width - 1;
	if (format.flag == 1)
		to_add = ft_calloc_flag(nbr_space, 48);
	else
		to_add = ft_calloc_flag(nbr_space, 32);
	if (format.flag == 2)
		printed = ft_add_front_to_char(c, to_add);
	else
		printed = ft_add_back_to_char(c, to_add);
	ft_putstr_fd(printed, format.fd);
	len = ft_strlen(printed);
	free(printed);
	return (len);
}

/*
** Imprime le caractère passé en argument après formatage
** et renvoie le nom total de caractères imprimés.
** =========
** #1 : un format.
** #2 : un pointeur sur l'élément actuel de la liste d'arguments.
** =========
** Retourne le nombre total de caractères imprimés.
*/

int		ft_print_c(t_format format, va_list ap)
{
	char	c;
	int		with_format;

	c = (char)va_arg(ap, int);
	with_format = 0;
	if (c == 0 && format.flag == 0)
	{
		with_format = ft_put_formatted_char(format, c);
		write(format.fd, &c, 1);
		with_format += 1;
	}
	else if (c == 0 && format.flag != 0)
	{
		write(format.fd, &c, 1);
		while (with_format++ < (format.width - 1))
			write(format.fd, " ", 1);
	}
	else
		with_format = ft_put_formatted_char(format, c);
	return (with_format);
}

/*
** Imprime le caractère '%' après formatage
** et renvoie le nom total de caractères imprimés.
** =========
** #1 : un format.
** #2 : un pointeur sur l'élément actuel de la liste d'arguments.
** =========
** Retourne le nombre total de caractères imprimés,
** -1 en cas d'errreur.
*/

int		ft_print_per(t_format format)
{
	char	c;
	int		with_format;

	c = '%';
	if (format.specifier != '%')
		return (-1);
	with_format = ft_put_formatted_char(format, c);
	return (with_format);
}
