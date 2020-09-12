/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_selectsort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrossig <adrossig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/25 15:35:10 by adrossig          #+#    #+#             */
/*   Updated: 2019/12/17 16:35:02 by adrossig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_selectsort(int *a, int b)
{
	int i;
	int j;
	int k;

	i = 0;
	while (i < b - 1)
	{
		j = i + 1;
		k = i;
		while (j < b)
		{
			if (a[j] < a[k])
				k = j;
			ft_swap(&a[k], &a[i]);
			j++;
		}
		i++;
	}
}
