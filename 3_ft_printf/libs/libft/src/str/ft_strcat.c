/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrossig <adrossig@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/25 15:35:56 by adrossig          #+#    #+#             */
/*   Updated: 2020/09/13 11:13:12 by adrossig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dest, const char *src)
{
	int i;
	int j;

	i = 0;
	j = ft_strlen(dest);
	while (*(src + i))
	{
		*(dest + i + j) = *(src + i);
		i++;
	}
	*(dest + i + j) = '\0';
	return (dest);
}
