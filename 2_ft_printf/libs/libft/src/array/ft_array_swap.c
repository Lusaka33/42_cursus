/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array_swap.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrossig <adrossig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/18 11:49:21 by adrossig          #+#    #+#             */
/*   Updated: 2019/12/19 17:22:05 by adrossig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_array_swap(t_array *array, int position1, int position2)
{
	int temp;

	temp = array->array[position1];
	array->array[position1] = array->array[position2];
	array->array[position2] = temp;
}
