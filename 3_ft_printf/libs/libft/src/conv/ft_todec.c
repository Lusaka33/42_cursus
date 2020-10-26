/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_todec.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrossig <adrossig@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/19 14:00:56 by adrossig          #+#    #+#             */
/*   Updated: 2020/10/16 12:24:37 by adrossig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Converti un nombre de n'importe quel type en nombre decimal.
** =======
** #1: le nombre a convertir.
** #2: la base de convertions (ex: base 10).
** =======
** Retourne le résultat de la conversion en entier de type long long.
*/

static int	value(char c)
{
	if (c >= '0' && c <= '9')
		return ((int)c - '0');
	else
		return ((int)c - 'A' + 10);
}

int			ft_todec(char *str, int base)
{
	int lenght;
	int power;
	int num;
	int i;

	if (!str)
		return (OK);
	lenght = ft_strlen(str);
	power = 1;
	num = 0;
	i = lenght - 1;
	while (i >= 0)
	{
		num += value(*(str + i)) * power;
		power = power * base;
		i--;
	}
	return (num);
}
