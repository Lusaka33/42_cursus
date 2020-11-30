/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrossig <adrossig@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/25 15:39:02 by adrossig          #+#    #+#             */
/*   Updated: 2020/10/26 15:09:27 by adrossig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Concatène la chaîne de caractères src à la fin de dst,
** en veillant à ce que le nombre de cartères de dst après
** concaténation ne dépasse pas dstsize. 
** =========
** #1 : une chaîne de caractères de destination.
** #2 : une chaîne de caractères source.
** #3 : le nombre maximal de caractères de dst à ajouter. 
** =========
** Retourne le nombre total de caractères de la chaîne dst
** avant concaténation auquel on ajoute celui de src.
*/


size_t		ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (*(dest + i) != '\0' && i < size)
		i++;
	while (*(src + j) && i + j + 1 < size)
	{
		*(dest + i + j) = *(src + j);
		j++;
	}
	if (i != size)
		*(dest + i + j) = '\0';
	return (i + ft_strlen(src));
}
