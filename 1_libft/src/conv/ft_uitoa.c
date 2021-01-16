/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uitoa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrossig <adrossig@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/23 16:13:53 by adrossig          #+#    #+#             */
/*   Updated: 2021/01/16 12:35:45 by adrossig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_conv.h"

/*
** Allocates (with malloc(3)) and returns a chain of
** characters representing an unsigned integer n received as argument.
** =======
** #1 : the integer to convert.
** =======
** Returns the string representing n,
** NULL if the allocation fails.
*/

char	*ft_uitoa(unsigned int n)
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
