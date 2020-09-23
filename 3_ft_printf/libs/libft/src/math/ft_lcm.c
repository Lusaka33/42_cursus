/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lcm.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrossig <adrossig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/18 17:30:07 by adrossig          #+#    #+#             */
/*   Updated: 2020/09/23 14:58:52 by adrossig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_lcm(int nbr1, int nbr2)
{
	int min;

	min = (nbr1 > nbr2) ? nbr1 : nbr2;
	while (1)
	{
		if (min % nbr1 == 0 && min % nbr2 == 0)
		{
			break ;
		}
		++min;
	}
	return (OK);
}
