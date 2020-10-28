/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_merge.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrossig <adrossig@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 17:48:09 by adrossig          #+#    #+#             */
/*   Updated: 2020/10/26 18:05:57 by adrossig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_sort.h"

char	ft_merge(int *array, int *aux, int low, int mid, int high)
{
	size_t i;
	int j;
	int k;

	i = low;
	j = mid + 1;
	k = low;
	while (i <= high)
	{
		*(aux + i) = *(array + i);
		i++;
	}
	i = low;
	while (j <= mid && k <= high)
	{
		if (*(aux + j) <= *(array + k))
		{
			*(array + k) = *(aux + j);
			j++;
		}
		else
		{
			*(array + k) = *(aux + k);
			k++;
		}
		k++;
	}
}

