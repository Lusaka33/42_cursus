/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrossig <adrossig@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/25 15:36:46 by adrossig          #+#    #+#             */
/*   Updated: 2020/10/26 15:11:46 by adrossig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
	unsigned i;

	i = 0;
	while (*(str1 + i) == *(str2 + i) && *(str1 + i))
		i++;
	return (((unsigned char)*(str1 + i)) - ((unsigned char)*(str2 + i)));
}
