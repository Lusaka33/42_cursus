/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_perimeter.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrossig <adrossig@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/18 12:07:59 by adrossig          #+#    #+#             */
/*   Updated: 2021/01/14 12:59:20 by adrossig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_perimeter(int width, int height)
{
	int	result;

	result = ((2 * height) + (2 * width));
	ft_printf("\t Perimeter = %d\n", result);
	return (result);
}
