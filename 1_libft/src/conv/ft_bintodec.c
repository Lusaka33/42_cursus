/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bintodec.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrossig <adrossig@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/25 14:53:06 by adrossig          #+#    #+#             */
/*   Updated: 2021/01/14 12:23:39 by adrossig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_conv.h"

/*
** Converti un binaire en nombre decimal.
** =======
** #1: Binaire de type int.
** =======
** Retourne le résultat de la conversion en entier de type int.
*/

int	ft_bintodec(int binary)
{
	int	i;
	int	mult;

	i = 0;
	mult = 1;
	while (binary != 0)
	{
		i += (binary % 10) * mult;
		binary /= 10;
		mult *= 2;
	}
	return (i);
}
