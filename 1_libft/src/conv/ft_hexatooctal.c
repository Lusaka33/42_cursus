/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexatooctal.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrossig <adrossig@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/18 15:02:55 by adrossig          #+#    #+#             */
/*   Updated: 2020/10/28 18:02:49 by adrossig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_conv.h"

/*
** Converti un hexadecimal en nombre octal.
** =======
** #1: Decimal de type char.
** =======
** Retourne le résultat de la conversion en entier de type long long.
*/

long long	ft_hexatooctal(char *hex)
{
	int temp;
	int result;

	if (!hex)
		return (OK);
	temp = ft_todec(hex, 16);
	result = ft_dectooctal(temp);
	return (result);
}
