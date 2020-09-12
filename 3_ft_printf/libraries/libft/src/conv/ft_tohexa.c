/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tohexa.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrossig <adrossig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/19 11:29:29 by adrossig          #+#    #+#             */
/*   Updated: 2019/12/19 17:36:01 by adrossig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
