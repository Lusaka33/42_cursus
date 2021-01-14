/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_charset.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrossig <adrossig@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/25 14:55:48 by adrossig          #+#    #+#             */
/*   Updated: 2021/01/14 12:07:44 by adrossig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_char.h"

int	ft_charset(char str, char *charset)
{
	int	i;

	i = 0;
	while (*(charset + i))
	{
		if (str == *(charset + i))
			return (1);
		i++;
	}
	return (OK);
}
