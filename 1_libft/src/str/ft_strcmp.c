/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrossig <adrossig@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/25 15:36:46 by adrossig          #+#    #+#             */
/*   Updated: 2020/10/28 18:29:19 by adrossig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_str.h"

/*
** Compare les deux chaînes s1 et s2.
** =========
** #1 : une chaîne de caractères s1.
** #2 : une chaîne de caractères s2.
** =========
** Retourne un entier négatif, nul, ou positif,
** si s1 est respectivement inférieure, égale ou supérieure à s2.
*/

int		ft_strcmp(const char *str1, const char *str2)
{
	while (*str1 == *str2++)
		if (*str1++ == 0)
			return (OK);
	return (*(unsigned char *)str1 - *(unsigned char *) --str2);
}
