/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrossig <adrossig@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/25 14:52:40 by adrossig          #+#    #+#             */
/*   Updated: 2020/10/28 18:02:21 by adrossig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_conv.h"

/*
** Converti le début de la chaîne pointée en entier.
** =======
** #1: un pointeur vers une chaîne de caractères.
** =======
** Retourne le résultat de la conversion en entier de type int.
*/

int	ft_atoi(const char *str)
{
	size_t	i;
	int		sign;
	int		nb;

	i = 0;
	nb = 0;
	sign = 1;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '+' || str[i] == '-')
		sign *= (str[i++] == '-' ? -1 : 1);
	while (str[i] >= '0' && str[i] <= '9')
		nb = (nb * 10) + (str[i++] - '0');
	return (sign * nb);
}
