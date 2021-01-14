/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arrayadd_value.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrossig <adrossig@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/18 11:41:27 by adrossig          #+#    #+#             */
/*   Updated: 2021/01/14 12:07:13 by adrossig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_array.h"

int	ft_arrayadd_value(t_array *array, int position, int value)
{
	if (position >= 0 && position < array->size)
	{
		if (array->array[position] == 0)
		{
			array->array[position] = value;
			return (SUCCESS);
		}
		else
			return (POSITION_INIT);
	}
	return (INVALID_POSITION);
}
