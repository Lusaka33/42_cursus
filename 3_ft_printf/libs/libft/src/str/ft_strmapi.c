/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrossig <adrossig@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/25 15:40:06 by adrossig          #+#    #+#             */
/*   Updated: 2020/09/13 11:06:39 by adrossig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	char	*str;
	size_t	size;

	if (!s || !f)
		return (NULL);
	size = ft_strlen(s);
	str = ft_strnew(size);
	while (size--)
		*(str + size) = f(size, *(s + size));
	return (str);
}
