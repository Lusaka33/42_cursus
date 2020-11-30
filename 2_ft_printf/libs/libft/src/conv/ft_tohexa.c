/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tohexa.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrossig <adrossig@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/19 11:29:29 by adrossig          #+#    #+#             */
/*   Updated: 2020/10/16 12:24:17 by adrossig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Converti un nombre de n'importe quel type en nombre hexadecimal.
** =======
** #1: la base de convertions (ex: base 10).
** #2: le nombre a convertir.
** #3: la longueur.
** =======
** Retourne le résultat de la conversion en entier de type long long.
*/

char	*ft_tohexa(char *base, unsigned long nbr, unsigned long lenght)
{
	char			*locma;
	long			i;
	unsigned long	result;
	unsigned long	divisor;

	i = 0;
	result = 0;
	divisor = 1;
	if (!base)
		return (NULL);
	if (!(locma = malloc(sizeof(char) * 33)))
		return (NULL);
	while ((nbr / divisor) >= lenght)
		divisor *= lenght;
	while (divisor > 0)
	{
		result = (nbr / divisor) % lenght;
		*(locma + i++) = *(base + result);
		divisor /= lenght;
	}
	*(locma + i) = 0;
	return (locma);
}
