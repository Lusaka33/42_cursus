/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_inti_dict.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrossig <adrossig@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/10 12:41:15 by adrossig          #+#    #+#             */
/*   Updated: 2020/06/10 17:46:19 by adrossig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_dictionary	ft_init_dict(void)
{
	t_dictionary	*locma;
	int				i;

	if (!(locma = malloc(sizeof(t_dictionary))))
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
