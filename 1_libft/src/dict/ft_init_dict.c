/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_dict.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrossig <adrossig@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/10 12:41:15 by adrossig          #+#    #+#             */
/*   Updated: 2020/09/12 19:39:43 by adrossig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_dict.h"

t_dictionary	*create_dict(void)
{
	t_dictionary	*locma;
	int				i;

	if (!(locma = malloc(sizeof(t_dictionary)) == NULL))
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
