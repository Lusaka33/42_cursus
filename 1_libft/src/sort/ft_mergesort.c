/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mergesort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrossig <adrossig@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/15 11:36:19 by adrossig          #+#    #+#             */
/*   Updated: 2020/09/15 13:20:18 by adrossig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_merge(int *array, int left, int right, int nbr)
{
	int *locma;
	int i;
	int p1;
	int p2;
	
	i = 1;
	p1 = 1;
	p2 = ((left + right) / 2) + 1;
	if (!(locma = (int *)malloc(nbr * sizeof(int))))
		return (NULL);
	while ((p1 < ((left + right) / 2) + 1) && (p2 < right + 1))
	{
		if (*(array + p1) <= *(array + p2))
		{
			*(locma + i++) = *(array + p1);
			p1++;
		}
		else
		{
			*(locma + i++) = *(array + p2);
			p2++;
		}
		
	}
	if (p2 == right + 1)
	{
		while (p1 < ((left + right) / 2) + 1)
		{
			*(locma + i++) = *(array + p1);
			p1++;
		}
	}
; 
	
}
