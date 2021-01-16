/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexatooctal.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrossig <adrossig@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/18 15:02:55 by adrossig          #+#    #+#             */
/*   Updated: 2021/01/16 12:32:15 by adrossig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_conv.h"

/*
** Converts a hexadecimal to an octal number.
** =======
** #1: Decimal type char.
** =======
** Returns the result of the conversion as an integer long type.
*/

long long	ft_hexatooctal(char *hex)
{
	int	temp;
	int	result;

	if (!hex)
		return (OK);
	temp = ft_todec(hex, 16);
	result = ft_dectooctal(temp);
	return (result);
}
