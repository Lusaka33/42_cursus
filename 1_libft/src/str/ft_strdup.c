/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrossig <adrossig@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/25 15:37:32 by adrossig          #+#    #+#             */
/*   Updated: 2021/01/14 14:24:15 by adrossig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_str.h"

/*
** Depuis une chaîne de caractères s1, en crée une nouvelle
** dont la mémoire occupée est obtenue par un appel de malloc(3).
** =======
** #1 : chaîne à dupliquer.
** =======
** Retourne un pointeur sur la chaîne dupliquée depuis s1,
** ou NULL s'il l'allocation dynamique de mémoire échoue.
*/

char	*ft_strdup(const char *str)
{
	char			*dest;
	unsigned int	i;

	dest = (char *)malloc(sizeof(char) * ft_strlen((char *)str) + 1);
	if (dest == NULL)
		return (NULL);
	i = 0;
	while (i < ft_strlen((char *)str))
	{
		*(dest + i) = *(str + i);
		++i;
	}
	*(dest + i) = '\0';
	return (dest);
}
