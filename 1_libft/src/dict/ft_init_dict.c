/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_dict.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrossig <adrossig@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/10 12:41:15 by adrossig          #+#    #+#             */
/*   Updated: 2021/01/14 12:47:05 by adrossig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_dict.h"

t_dictionary	*create_dict(void)
{
	t_dictionary	*locma;
	int				i;

	locma = malloc(sizeof(t_dictionary));
	if (locma == NULL)
		return (NULL);
	else
	{
		locma->nbr = 0;
		i = 0;
		while (i < MAXELEMENTS)
		{
			locma->elements[i] = NULL;
			i++;
		}
		return (locma);
	}
}
