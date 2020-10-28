/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrossig <adrossig@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/25 15:25:38 by adrossig          #+#    #+#             */
/*   Updated: 2020/10/28 18:02:59 by adrossig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_conv.h"

/*
** Alloue (avec malloc(3)) et retourne une chaine de
** caractères représentant un integer n reçu en argument.
** Les nombres négatifs doivent être gérés.
** =======
** #1 : l'integer à convertir.
** =======
** Retourne la chaine de caractères représentant l’integer,
** NULL si l’allocation échoue.
*/

char				*ft_itoa(int n)
{
	long			tmp;
	char			*str;
	size_t			len;

	tmp = (long)n;
	str = NULL;
	len = ft_intlen(tmp) + (n < 0 ? 1 : 0);
	if (n < 0)
		tmp = (tmp * -1);
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
		if (n < 0)
			str[0] = '-';
	}
	return (str);
}
