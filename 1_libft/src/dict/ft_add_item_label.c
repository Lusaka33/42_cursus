/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_item_label.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrossig <adrossig@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/10 12:53:16 by adrossig          #+#    #+#             */
/*   Updated: 2020/09/12 18:45:09 by adrossig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_add_item_label(t_dictionary *dict, char *label, void *item)
{
	unsigned int index;

	index = ft_gethash(label);
	if (index < MAXELEMENTS)
	{
		dict->elements[index] = item;
		return (OK);
	}
	return (KO);
}
