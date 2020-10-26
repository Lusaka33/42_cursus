/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isgraph.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrossig <adrossig@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/25 15:23:56 by adrossig          #+#    #+#             */
/*   Updated: 2020/10/16 11:48:14 by adrossig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Vérifie si le caractère c a une représentation graphique.
** =========
** #1 : le carctère à analyser.
** =========
** Retourne 1 si c'est le cas (VRAI),
** 0 si ce n'est pas le cas (FAUX).
*/

int		ft_isgraph(int i)
{
	if ((i >= 32 && i <= 126) && !(i == ' ' || i == '\t' || i == '\n' ||
	i == '\v' || i == '\f' || i == '\r'))
		return (1);
	return (OK);
}
