/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_octaltodec.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrossig <adrossig@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/23 11:28:16 by adrossig          #+#    #+#             */
/*   Updated: 2021/01/14 12:40:39 by adrossig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_conv.h"

/*
** Converti un nombre octal en nombre decimal.
** =======
** #1: octal de type int.
** =======
** Retourne le résultat de la conversion en entier de type long long.
*/

long long	ft_octaltodec(int octal)
{
	int	decimal;
	int	i;

	decimal = 0;
	i = 0;
	while (octal != 0)
	{
		decimal += (octal % 10) * ft_power(8, i);
		++i;
		octal /= 10;
	}
	i = 1;
	return (decimal);
}
