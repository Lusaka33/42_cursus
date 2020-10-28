/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_element_label.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrossig <adrossig@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/10 12:57:28 by adrossig          #+#    #+#             */
/*   Updated: 2020/10/28 18:04:46 by adrossig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_dict.h"

void	*ft_get_element_label(t_dictionary *dict, char *string)
{
	int	index;

	index = ft_gethash(string);
	if (dict->elements[index])
		return (dict->elements[index]);
	return (NULL);
}
