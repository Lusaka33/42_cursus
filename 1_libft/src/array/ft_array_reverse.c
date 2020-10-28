/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array_reverse.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrossig <adrossig@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/18 11:52:01 by adrossig          #+#    #+#             */
/*   Updated: 2020/10/28 17:59:39 by adrossig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_array.h"

int		ft_array_reverse(t_array *array)
{
	int i;

	i = 0;
	while (i < array->size / 2)
	{
		ft_array_swap(array, i, array->size - i - 1);
		i++;
	}
	return (SUCCESS);
}
