/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dectooctal.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrossig <adrossig@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/18 14:46:11 by adrossig          #+#    #+#             */
/*   Updated: 2021/01/16 12:31:35 by adrossig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_conv.h"

/*
** Converts a decimal to an octal number.
** =======
** #1: Decimal type int
** =======
** Returns the result of the conversion as an integer of type int.
*/

int	ft_dectooctal(int decimal)
{
	int	octal;
	int	i;

	octal = 0;
	i = 1;
	while (decimal != 0)
	{
		octal = (decimal % 8 * i) + octal;
		decimal /= 8;
		i *= 10;
	}
	return (octal);
}
