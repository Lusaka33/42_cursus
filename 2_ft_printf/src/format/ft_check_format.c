/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_format.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrossig <adrossig@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/09 09:30:39 by adrossig          #+#    #+#             */
/*   Updated: 2020/10/09 09:30:42 by adrossig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

/*
** Vérifie la validité des indications de formatage.
** =========
** #1 : un format.
** =========
** Retourne -1 si le format n'est pas valide,
** 0 si elle l'est.
*/

int	ft_check_format(t_format format)
{
	if (format.flag == -1)
		return (-1);
	else if (format.width == -1)
		return (-1);
	else if (format.precision == -2)
		return (-1);
	else if (format.specifier == '0')
		return (-1);
	else
		return (0);
}
