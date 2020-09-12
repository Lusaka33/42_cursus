/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dectooctal.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrossig <adrossig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/18 14:46:11 by adrossig          #+#    #+#             */
/*   Updated: 2019/12/19 17:28:39 by adrossig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_dectooctal(int decimal)
{
	int octal;
	int i;

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
