/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrossig <adrossig@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/25 15:38:49 by adrossig          #+#    #+#             */
/*   Updated: 2020/09/17 12:10:20 by adrossig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char		*locma;
	unsigned	i;
	unsigned	j;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (NULL);
	if (!(locma = (char *)malloc(sizeof(s1) + sizeof(s2) + 1)))
		return (NULL);
	while (s1 && *(s1 + i))
	{
		*(locma + i) = *(s1 + i);
		i++;
	}
	while (s2 && *(s2 + j))
	{
		*(locma + i + j) = *(s2 + j);
		j++;
	}
	*(locma + i + j) = '\0';
	return (locma);
}
