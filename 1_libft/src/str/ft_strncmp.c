/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrossig <adrossig@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/25 15:40:34 by adrossig          #+#    #+#             */
/*   Updated: 2020/10/28 11:50:06 by adrossig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_str.h"

/*
** Compare les n (au plus) premiers caractères 
** de deux chaînes s1 et s2.
** =========
** #1 : une chaîne de caractères s1.
** #2 : une chaîne de caractères s2.
** #3 : le nombre maximal de caractères à comparer. 
** =========
** Retourne un entier négatif, nul, ou positif,
** si s1 est respectivement inférieure, égale ou supérieure à s2.
*/

int		ft_strncmp(const char *str1, const char *str2, size_t i)
{
	unsigned j;

	j = 0;
	if (i == 0)
		return (OK);
	while ((*(str1 + j) == *(str2 + j)) && *(str2 + j) && (--i))
		++j;
	return ((unsigned char)*(str1 + j) - (unsigned char)*(str2 + j));
}
