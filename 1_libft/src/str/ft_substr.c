/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrossig <adrossig@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/25 15:43:49 by adrossig          #+#    #+#             */
/*   Updated: 2020/10/28 10:24:59 by adrossig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_str.h"

/*
** Alloue (avec malloc(3)) et retourne une chaine de caractères
** issue de la chaine ’s’. Cette nouvelle chaine commence à l’index 
** start et a pour taille maximale len.
** =======
** #1 : la chîne de laquelle extraire la nouvelle chaîne.
** #2 : l'index de début de la nouvelle chaîne s.
** #3 : la taille maximale de la nouvelle chapine.
** =======
** Retourne un pointeur sur la nouvelle chaîne,
** ou NULL s'il l'allocation dynamique de mémoire échoue.
*/

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;
	size_t	j;

	if (!s)
		return (NULL);
	if (!(str = (char*)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	j = 0;
	if (start <= ft_strlen(s))
	{
		i = start;
		while (i < len + start)
		{
			*(str + j++) = *(s + i);
			i++;
		}
	}
	*(str + j) = '\0';
	return (str);
}
