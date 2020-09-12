/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_gcd.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrossig <adrossig@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/18 17:34:16 by adrossig          #+#    #+#             */
/*   Updated: 2020/06/16 11:30:13 by adrossig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_gcd(int nbr1, int nbr2)
{
	nbr1 = (nbr1 > 0) ? nbr1 : -nbr1;
	nbr2 = (nbr2 > 0) ? nbr2 : -nbr2;
	while (nbr1 != nbr2)
	{
		if (nbr1 > nbr2)
			nbr1 -= nbr2;
		else
			nbr2 -= nbr1;
	}
	ft_printf("Greatest Common Divisor = %d", nbr1);
	return (OK);
}
