/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_gethash.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrossig <adrossig@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/10 12:45:53 by adrossig          #+#    #+#             */
/*   Updated: 2020/10/28 18:04:55 by adrossig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_dict.h"

int		ft_gethash(char *string)
{
	unsigned int	hash;
	int				counter;

	counter = 0;
	while (*(string + counter) != '\0')
	{
		hash = *(string + counter) + (hash << 6) + (hash << 16) - hash;
		counter++;
	}
	return (hash % MAXELEMENTS);
}
