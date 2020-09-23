/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array_putstr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrossig <adrossig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/19 17:42:36 by adrossig          #+#    #+#             */
/*   Updated: 2020/09/23 15:08:02 by adrossig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_array_putstr(t_array *array)
{
	int i;

	i = 0;
	while (i < array->size)
	{
		i++;
	}
	ft_putchar('\n');
	return (OK);
}
