/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dectooctal.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrossig <adrossig@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/18 14:46:11 by adrossig          #+#    #+#             */
/*   Updated: 2021/01/14 12:25:59 by adrossig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_conv.h"

/*
** Converti un decimal en nombre octal.
** =======
** #1: Decimal de type int.
** =======
** Retourne le résultat de la conversion en entier de type int.
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
