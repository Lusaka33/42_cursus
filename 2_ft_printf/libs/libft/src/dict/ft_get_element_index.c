/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_element_index.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrossig <adrossig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/10 13:00:07 by adrossig          #+#    #+#             */
/*   Updated: 2020/01/10 13:00:07 by adrossig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_get_element_index(t_dictionary *dict, int index)
{
	if (index >= 0 && index < MAXELEMENTS)
		return (dict->elements[index]);
	return (NULL);
}
