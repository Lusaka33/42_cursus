/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrossig <adrossig@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/25 15:31:09 by adrossig          #+#    #+#             */
/*   Updated: 2020/10/16 12:30:18 by adrossig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Compare les n premiers octets des zones mémoire s1 et s2.
** =========
** #1 : la zone mémoire pointée par s1.
** #2 : la zone mémoire pointée par s1.
** #3 : le nombre d'octets à examiner.
** =========
** Retourne un entier inférieur, égal, ou supérieur à zéro,
** si s1 est respectivement inférieure, égale ou supérieur à s2.
*/

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (OK);
	while (i < (n - 1)
			&& *((unsigned char*)(s1 + i)) == *((unsigned char*)(s2 + i)))
		i++;
	return (*((unsigned char*)(s1 + i)) - *((unsigned char*)(s2 + i)));
}
