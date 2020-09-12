/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array_erase.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrossig <adrossig@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/18 11:46:55 by adrossig          #+#    #+#             */
/*   Updated: 2020/06/15 11:11:02 by adrossig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_array_erase(t_array *array)
{
	int i;

	i = 0;
	while (i < array->size)
	{
		array->array[i] = 0;
		i++;
	}
	return (OK);
}
