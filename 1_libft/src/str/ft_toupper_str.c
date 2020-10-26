/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper_str.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrossig <adrossig@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/16 11:02:40 by adrossig          #+#    #+#             */
/*   Updated: 2020/10/26 15:15:10 by adrossig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Convertit le nombre de character en MAJ, si possible.
** =========
** #1 : le character à convertir.
** #2 : le nombre de character
** =========
** Retourne les lettres convertie, ou celle de départ
** si la conversion n'était pas possible.
*/

char		*ft_toupper_str(char *str, int len)
{
	int		i;

	i = 0;
	while (i < len)
	{
		if (*(str + i) >= 'a' && *(str + i) <= 'z')
			*(str + i) = *(str + i) - 32;
		else
			*(str + i) = *(str + i);
		i++;
	}
	return (str);
}
