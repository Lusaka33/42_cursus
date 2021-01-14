/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bintooctal.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrossig <adrossig@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/18 15:53:10 by adrossig          #+#    #+#             */
/*   Updated: 2021/01/14 12:24:03 by adrossig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_conv.h"

/*
** Converti un binaire en nombre octal.
** =======
** #1: Binaire de type int.
** =======
** Retourne le résultat de la conversion en entier de type int.
*/

int	ft_bintooctal(int binary)
{
	int	octal;
	int	decimal;
	int	i;

	octal = 0;
	decimal = 0;
	i = 0;
	while (binary != 0)
	{
		decimal = decimal + (binary % 10) * ft_power(2, i);
		i++;
		binary = binary / 10;
	}
	i = 1;
	while (decimal != 0)
	{
		octal += (decimal % 8) * i;
		decimal /= 8;
		i *= 10;
	}
	return (octal);
}
