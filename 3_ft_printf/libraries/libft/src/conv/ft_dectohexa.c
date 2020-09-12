/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dectohexa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrossig <adrossig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/18 14:05:27 by adrossig          #+#    #+#             */
/*   Updated: 2019/12/19 17:29:39 by adrossig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_dectohexa(int decimal)
{
	int		remainder;
	int		i;
	char	hexadecimal[3];

	remainder = 0;
	i = 0;
	while (decimal > 0 && i >= 0)
	{
		remainder = decimal % 16;
		*(hexadecimal + i) = remainder < 10 ?
		(char)remainder + 48 : (char)remainder + 55;
		decimal /= 16;
		i++;
	}
	*(hexadecimal + i) = '\0';
	return (ft_strrev(hexadecimal));
}
