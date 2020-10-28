/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrossig <adrossig@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/25 15:31:22 by adrossig          #+#    #+#             */
/*   Updated: 2020/10/28 18:08:09 by adrossig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_mem.h"

/*
** Copie n octets depuis la zone mémoire src 
** vers la zone mémoire dst.
** Les deux zones ne doivent pas se chevaucher.
** (Si c'est le cas, utilisez plutôt memmove(3)).
** =========
** #1 : la zone mémoire de destination.
** #2 : la zone mémoire source.
** #3 : le nombre d'octets à copier.
** =========
** Retourne un pointeur vers la zone mémoire dst.
*/

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (dest == src)
		return (dest);
	i = 0;
	while (i < n)
	{
		*((unsigned char*)(dest + i)) = *((unsigned char*)(src + i));
		i++;
	}
	return (dest);
}
