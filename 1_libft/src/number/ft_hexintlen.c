/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexintlen.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrossig <adrossig@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/29 12:43:10 by adrossig          #+#    #+#             */
/*   Updated: 2020/10/28 18:08:26 by adrossig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_number.h"

/*
** Calcule la longueur d'un entier n,
** de type unsigned int, en base octale.
** =========
** #1 : un entier n.
** =========
** Retourne la longueur de n.
*/

size_t	ft_hexintlen(unsigned int n)
{
	int	i;

	i = 1;
	while (n > 0)
	{
		n /= 16;
		i++;
	}
	return (i);
}
