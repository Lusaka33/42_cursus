/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrossig <adrossig@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/25 15:32:05 by adrossig          #+#    #+#             */
/*   Updated: 2020/09/13 11:14:36 by adrossig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int i, size_t n)
{
	size_t j;

	j = 0;
	while (j < n)
	{
		*(((unsigned char*)str) + j) = (unsigned char)i;
		j++;
	}
	return (str);
}
