/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array_putstr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrossig <adrossig@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/19 17:42:36 by adrossig          #+#    #+#             */
/*   Updated: 2020/10/28 17:59:36 by adrossig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_array.h"

int		ft_array_putstr(t_array *array)
{
	int i;

	i = 0;
	while (i < array->size)
	{
		i++;
		ft_printf("%d ", array->array[i]);
	}
	ft_putchar('\n');
	return (OK);
}
