/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_surface.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrossig <adrossig@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/18 12:08:20 by adrossig          #+#    #+#             */
/*   Updated: 2020/10/15 17:50:04 by adrossig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_surface(int width, int height)
{
	int result;

	result = width * height;
	ft_printf("\t Surface = %d\n", result);
	return (result);
}
