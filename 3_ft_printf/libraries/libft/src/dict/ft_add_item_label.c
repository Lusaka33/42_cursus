/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_item_label.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrossig <adrossig@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/10 12:53:16 by adrossig          #+#    #+#             */
/*   Updated: 2020/06/15 11:11:02 by adrossig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_add_item_label(t_dictionary *dict, char *label, void *item)
{
	unsigned int index;

	index = get_hash(label);
	if (index < MAXELEMENTS)
	{
		dict->elements[index] = item;
		return (OK);
	}
	return (KO);
}
