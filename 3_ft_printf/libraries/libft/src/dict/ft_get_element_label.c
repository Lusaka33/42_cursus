/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_element_label.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrossig <adrossig@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/10 12:57:28 by adrossig          #+#    #+#             */
/*   Updated: 2020/06/10 17:43:18 by adrossig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_get_element_label(t_dictionary *dict, char *string)
{
	int	index;

	index = ft_gethash(string);
	if (dict->elements[index])
		return (dict->elements[index]);
	return (NULL);
}
