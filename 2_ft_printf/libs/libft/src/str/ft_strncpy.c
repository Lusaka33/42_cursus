/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrossig <adrossig@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/25 15:40:47 by adrossig          #+#    #+#             */
/*   Updated: 2020/10/26 15:12:09 by adrossig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Copie les n premiers octets de src dans dest.
** =======
** #1 : La chaine de caractères de destination.
** #2 : La chaine de caractères source.
** #3 : le nombre de caractères à copier.
** =======
** Retourne un pointeur sur dst modifiée.
*/

char	*ft_strncpy(char *dest, const char *src, size_t i)
{
	unsigned j;

	j = 0;
	while ((*(src + j) != '\0') && j < i)
	{
		*(dest + j) = *(src + j);
		j++;
	}
	while (j < i)
	{
		*(dest + j) = '\0';
		j++;
	}
	return (dest);
}
