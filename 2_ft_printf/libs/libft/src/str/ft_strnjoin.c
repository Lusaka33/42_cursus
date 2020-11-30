/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnjoin.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrossig <adrossig@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/10 12:01:21 by adrossig          #+#    #+#             */
/*   Updated: 2020/06/19 17:54:54 by adrossig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnjoin(char *s1, char *s2, int n)
{
	char	*str;
	int		i;
	int		j;

	i = -1;
	j = 0;
	if (!s1 || !(str = malloc(sizeof(char) * ft_strlen(s1) + n + 1)))
	{
		free(s1);
		return (NULL);
	}
	while (*(s1 + ++i))
		*(str + i) = *(s1 + i);
	while (j < n && *(s2 + j))
	{
		*(str + i + j) = *(s2 + j);
		j++;
	}
	*(str + i + j) = '\0';
	free(s1);
	return (str);
}
