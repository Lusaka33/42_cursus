/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrossig <adrossig@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/25 15:25:38 by adrossig          #+#    #+#             */
/*   Updated: 2021/01/14 12:32:18 by adrossig         ###   ########.fr       */
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

static size_t	count_n_len(int n)
{
	size_t	i;

	i = 0;
	while (n)
	{
		n /= 10;
		i++;
	}
	return (i);
}

static void 	do_conv(char *buffer, long n, size_t i)
{
	if (n > 0)
	{
		do_conv(buffer, n / 10, --i);
		buffer[i] = n % 10 + '0';
	}
}

char	*ft_itoa(int n)
{
	char	s[12];
	size_t	len;

	ft_bzero(s, 12);
	len = count_n_len(n);
	if (n == 0)
		return (ft_strdup("0"));
	if (n < 0)
	{
		s[0] = '-';
		do_conv(s + 1, - (long)n, len);
	}
	else
		do_conv(s + 0, (long)n, len);
	return (ft_strdup(s));
}
