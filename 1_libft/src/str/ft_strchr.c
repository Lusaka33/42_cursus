/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrossig <adrossig@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/25 15:36:12 by adrossig          #+#    #+#             */
/*   Updated: 2020/10/28 11:46:22 by adrossig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_str.h"

/*
** Recherche le caractère c dans la chaîne s.
** =========
** #1 : la chaîne de caractère à parser.
** #2 : le caractère à chercher.
** =========
** Retourne un pointeur sur le caractère correspondant, 
** NULL si il n'a pas été trouvé.
*/

char	*ft_strchr(const char *str, int c)
{
	while (*str)
	{
		if (*str == (char) c)
			return ((char *)str);
		if (!*str)
			return ((char *)NULL);
		++str;
	}
	if ((char)c == 0)
		return ((char*)str);
	return (NULL) ;
}
