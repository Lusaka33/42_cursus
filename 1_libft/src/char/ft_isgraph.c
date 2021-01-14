/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isgraph.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrossig <adrossig@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/25 15:23:56 by adrossig          #+#    #+#             */
/*   Updated: 2021/01/14 12:19:44 by adrossig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_char.h"

/*
** Vérifie si le caractère c a une représentation graphique.
** =========
** #1 : le carctère à analyser.
** =========
** Retourne 1 si c'est le cas (VRAI),
** 0 si ce n'est pas le cas (FAUX).
*/

int	ft_isgraph(int i)
{
	if ((i >= 32 && i <= 126) && !(ft_isspace(i)))
		return (1);
	return (OK);
}
