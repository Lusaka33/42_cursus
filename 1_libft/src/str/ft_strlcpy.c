/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrossig <adrossig@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/25 15:39:19 by adrossig          #+#    #+#             */
/*   Updated: 2020/06/15 11:11:02 by adrossig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t tmp;

	tmp = 0;
	if (!src)
		return (OK);
	if (size > 0)
	{
		while (*(src + tmp) && tmp + 1 < size)
		{
			*(dest + tmp) = *(src + tmp);
			tmp++;
		}
		*(dest + tmp) = '\0';
	}
	return (ft_strlen(src));
}
