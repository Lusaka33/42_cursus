/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrossig <adrossig@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/25 15:43:19 by adrossig          #+#    #+#             */
/*   Updated: 2020/10/26 15:12:54 by adrossig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Recherche le caractère c dans la chaîne s.
** =========
** #1 : la chaîne de caractère à parser.
** #2 : le caractère à chercher.
** =========
** Retourne un pointeur sur la dernière occurence
** du caractère correspondant, NULL si il n'a pas été trouvé.
*/

char	*ft_strrchr(const char *str, int c)
{
	int		i;
	char	*temp;

	temp = (char *)str;
	i = ft_strlen(str);
	while (*(temp + i) != (char)c)
	{
		if (i == 0)
			return (NULL);
		i--;
	}
	return (temp + i);
}
