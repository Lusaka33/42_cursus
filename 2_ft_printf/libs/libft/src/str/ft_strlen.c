/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrossig <adrossig@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/25 15:39:34 by adrossig          #+#    #+#             */
/*   Updated: 2020/10/26 15:09:49 by adrossig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Calcule la longueur d'une chaîne de caractères.
** =========
** #1 : une chaîne de caractère.
** =========
** Retourne le nombre de caractères dans s.
*/

size_t		ft_strlen(const char *str)
{
	unsigned i;

	i = 0;
	while (*(str + i))
		++i;
	return (i);
}
