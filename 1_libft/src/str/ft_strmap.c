/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrossig <adrossig@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/25 15:39:49 by adrossig          #+#    #+#             */
/*   Updated: 2020/10/28 10:23:47 by adrossig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_str.h"

char			*ft_strmap(const char *s, char (*f)(char))
{
	char	*s2;
	int		i;

	i = 0;
	if (!s || !f)
		return (NULL);
	if (!(s2 = (char*)malloc(sizeof(char) * (ft_strlen(s) + 1))))
		return (NULL);
	while (*(s + i) != '\0')
	{
		*(s2 + i) = f(*(s + i));
		i++;
	}
	*(s2 + i) = '\0';
	return (s2);
}
