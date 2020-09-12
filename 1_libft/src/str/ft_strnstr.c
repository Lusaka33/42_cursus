/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrossig <adrossig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/25 15:43:05 by adrossig          #+#    #+#             */
/*   Updated: 2019/12/17 16:35:02 by adrossig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	unsigned i;
	unsigned j;

	i = 0;
	if (*needle == '\0')
		return ((char *)haystack);
	while (*(haystack + i) && i < n)
	{
		j = 0;
		while (*(needle + j) == *(haystack + i + j) && (i + j) < n)
		{
			j++;
			if (ft_strlen((char *)needle) == j)
				return ((char *)haystack + i);
		}
		i++;
	}
	return (NULL);
}
