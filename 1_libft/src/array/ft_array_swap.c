/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array_swap.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrossig <adrossig@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/18 11:49:21 by adrossig          #+#    #+#             */
/*   Updated: 2020/10/28 17:59:41 by adrossig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_array.h"

void	ft_array_swap(t_array *array, int position1, int position2)
{
	int temp;

	temp = array->array[position1];
	array->array[position1] = array->array[position2];
	array->array[position2] = temp;
}
