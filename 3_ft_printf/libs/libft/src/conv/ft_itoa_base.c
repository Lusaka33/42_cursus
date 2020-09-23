/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrossig <adrossig@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/16 10:45:44 by adrossig          #+#    #+#             */
/*   Updated: 2020/06/16 10:46:49 by adrossig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		value_len(uintmax_t nb, int base)
{
	int		len;

	len = 0;
	while (nb != 0)
	{
		nb /= base;
		len++;
	}
	return (len);
}

char	*ft_itoa_base(intmax_t value, int base)
{
	int					len;
	uintmax_t			nb;
	char				*ret;
	char				*arr;

	nb = (value < 0 && base == 10) ? -value : (uintmax_t)value;
	len = (value == 0 || (value < 0 && base == 10)) ? 1 : 0;
	len += value_len(nb, base);
	if (!(ret = (char*)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	arr = ft_strdup("0123456789abcdef");
	if (value < 0 && base == 10)
		ret[0] = '-';
	if (value == 0)
		ret[0] = '0';
	ret[len] = '\0';
	nb = (value < 0 && base == 10) ? -value : (uintmax_t)value;
	while (nb != 0)
	{
		ret[--len] = arr[nb % base];
		nb /= base;
	}
	free(arr);
	return (ret);
}
