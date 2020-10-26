/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrossig <adrossig@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/25 14:54:51 by adrossig          #+#    #+#             */
/*   Updated: 2020/10/16 12:29:18 by adrossig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Alloue (avec malloc(3)) la mémoire nécessaire pour un tableau
** de count éléments de taile size octets.
** =======
** #1 : nombre d'éléments dans le tableau.
** #2 : taille en octets d'un élément.
** =======
** Retourne un pointeur sur l méoire allouée, 
** NULL si count ou size vaut 0. 
*/

void	*ft_calloc(size_t count, size_t size)
{
	char	*var;

	if (count == 0 || size == 0)
	{
		count = 1;
		size = 1;
	}
	if (!(var = malloc(sizeof(char) * (count * size))))
		return (NULL);
	ft_bzero((void*)var, count * size);
	return ((void*)var);
}
