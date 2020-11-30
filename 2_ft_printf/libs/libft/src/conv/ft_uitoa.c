/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uitoa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrossig <adrossig@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/23 16:13:53 by adrossig          #+#    #+#             */
/*   Updated: 2020/10/16 12:24:31 by adrossig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Alloue (avec malloc(3)) et retourne une chaine de
** caractères représentant un unsigned integer n reçu en argument.
** =======
** #1 : l'integer à convertir.
** =======
** Retourne la chaine de caractères représentant n,
** NULL si l’allocation échoue.
*/

char				*ft_uitoa(unsigned int n)
{
	unsigned long	tmp;
	char			*str;
	size_t			len;

	tmp = (unsigned long)n;
	str = NULL;
	len = ft_uintlen(tmp);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (str != NULL)
	{
		str[len] = '\0';
		while (len > 0)
		{
			str[len - 1] = (tmp % 10) + '0';
			len--;
			tmp = tmp / 10;
		}
	}
	return (str);
}
