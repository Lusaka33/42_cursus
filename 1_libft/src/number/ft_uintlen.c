/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uintlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrossig <adrossig@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/29 12:43:25 by adrossig          #+#    #+#             */
/*   Updated: 2021/01/14 14:06:34 by adrossig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_number.h"

/*
** Calcule la longueur d'un entier n,
** de type unsigned int.
** =========
** #1 : un entier n.
** =========
** Retourne la longueur de n.
*/

size_t	ft_uintlen(unsigned int n)
{
	int	i;

	i = 1;
	n /= 10;
	while (n)
		i++;
	return (i);
}
