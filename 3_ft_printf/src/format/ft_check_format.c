/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_format.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrossig <adrossig@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/23 13:54:58 by adrossig          #+#    #+#             */
/*   Updated: 2020/09/23 13:54:59 by adrossig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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
