/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrossig <adrossig@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/25 15:30:50 by adrossig          #+#    #+#             */
/*   Updated: 2020/10/16 12:30:04 by adrossig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Examine les n premiers octets de la zone mémoire
** pointée par s à la recherche du caractère c.
** Le premier octet correspondant à c (interprété comme
** unsigned char) arrête l'opération.
** =========
** #1 : la zone mémoire pointée.
** #2 : le caractère à rechercher.
** #3 : le nombre d'octets à examiner.
** =========
** Retourne un pointeur vers l'octet correspondant
** ou NULL s'il n'est pas présent dans la zone concernée.
*/

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t			j;
	unsigned char	*dest;

	j = 0;
	dest = (unsigned char *)str;
	while (n-- > 0)
	{
		if (*(dest + j) == (unsigned char)c)
			return (dest + j);
		j++;
	}
	return (NULL);
}
