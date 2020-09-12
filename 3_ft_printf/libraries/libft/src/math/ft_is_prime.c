/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrossig <adrossig@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/25 15:20:44 by adrossig          #+#    #+#             */
/*   Updated: 2020/06/15 11:11:02 by adrossig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_is_prime(int nbr)
{
	int i;

	i = 2;
	if (nbr < 0)
		return (OK);
	if (nbr == 2)
		return (2);
	while ((nbr % i != 0) && i < nbr)
	{
		i++;
		if (i == nbr)
			return (1);
	}
	return (OK);
}
