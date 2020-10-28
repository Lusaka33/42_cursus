/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bintodec.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrossig <adrossig@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/25 14:53:06 by adrossig          #+#    #+#             */
/*   Updated: 2020/10/28 18:02:26 by adrossig         ###   ########.fr       */
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

int		ft_bintodec(int binary)
{
	int i;
	int mult;

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
