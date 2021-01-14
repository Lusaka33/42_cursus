/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrossig <adrossig@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/16 10:45:44 by adrossig          #+#    #+#             */
/*   Updated: 2021/01/14 12:40:26 by adrossig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_conv.h"

/*
** Alloue (avec malloc(3)) et retourne une chaine de
** caractères représentant un integer n reçu en argument.
** Les nombres négatifs doivent être gérés.
** =======
** #1: l'integer à convertir.
** #2: la base de convertion.
** =======
** Retourne la chaine de caractères représentant l’integer,
** NULL si l’allocation échoue.
*/

char	*ft_itoa_base_custom(u_int64_t nbr, uintmax_t base)
{
	static char	hex[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9',
						'A', 'B', 'C', 'D', 'E', 'F'};
	char		*str;
	uintmax_t	converted_nbr[64];
	uintmax_t	n;
	int64_t		i;

	if (nbr == 0)
		return (ft_strdup("0"));
	i = 0;
	n = (uintmax_t)nbr;
	while (n > 0)
	{
		converted_nbr[i++] = n % (uintmax_t)base;
		n /= (uintmax_t)base;
	}
	str = (char *)malloc(sizeof(char *) * (uintmax_t)i);
	if (str == NULL)
		return (NULL);
	str[i] = '\0';
	i--;
	while (i >= 0)
		str[n++] = hex[converted_nbr[i--]];
	return (str);
}
