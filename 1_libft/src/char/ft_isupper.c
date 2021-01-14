/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrossig <adrossig@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/25 15:25:21 by adrossig          #+#    #+#             */
/*   Updated: 2021/01/14 12:08:16 by adrossig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_char.h"

/*
** Vérifie si le caractère c est en majuscule.
** =========
** #1 : le carctère à analyser.
** =========
** Retourne 1 si c'est le cas (VRAI),
** 0 si ce n'est pas le cas (FAUX).
*/

int	ft_isupper(int i)
{
	if (i >= 'A' && i <= 'Z')
		return (1);
	return (OK);
}
