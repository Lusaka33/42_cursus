/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iscntrl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrossig <adrossig@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/25 15:23:23 by adrossig          #+#    #+#             */
/*   Updated: 2021/01/14 12:07:58 by adrossig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_char.h"

/*
** Vérifie si le caractère c est un character de control.
** =========
** #1 : le carctère à analyser.
** =========
** Retourne 1 si c'est le cas (VRAI),
** 0 si ce n'est pas le cas (FAUX).
*/

int	ft_iscntrl(int i)
{
	if ((i >= 0 && i <= 31) || i == 127)
		return (1);
	return (OK);
}
