/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uitoa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrossig <adrossig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/23 16:13:53 by adrossig          #+#    #+#             */
/*   Updated: 2020/09/23 16:27:34 by adrossig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_uitoalen(unsigned int nbr)
{
	int i;

	i = 1;
	while (nbr /= 10)
		i++;
	return (nbr);
}

char			*ft_uitoa(unsigned int nbr)
{
	unsigned long	temp;
	char			*str;
	size_t			len;

	temp = (unsigned long)nbr;
	str = NULL;
	len = ft_uitoalen(temp);
	if (!(str = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	else
	{
		*(str + len) = '\0';
		while (len > 0)
		{
			*(str + (len - 1)) = (temp % 10) + '0';
			len--;
			temp = temp / 10;
		}
	}
	return (str);
}
