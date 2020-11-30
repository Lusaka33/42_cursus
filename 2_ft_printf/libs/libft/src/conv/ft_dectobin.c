/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dectobin.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrossig <adrossig@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/18 15:12:50 by adrossig          #+#    #+#             */
/*   Updated: 2020/10/16 11:58:27 by adrossig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Converti un decimal en nombre binaire.
** =======
** #1: Decimal de type int.
** =======
** Retourne le résultat de la conversion en entier de type long long.
*/

long long		ft_dectobin(int decimal)
{
	long long	binary;
	int			i;

	i = 1;
	binary = 0;
	while (decimal != 0)
	{
		decimal /= 2;
		binary += decimal % 2 * i;
		i *= 10;
	}
	return (binary);
}

long long		ft_dectobin_recursive(int decimal)
{
	if (decimal == 0)
		return (OK);
	else
		return (decimal % 2 + 10 * ft_dectobin_recursive(decimal / 2));
}
