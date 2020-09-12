/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlenght.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrossig <adrossig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/18 10:40:09 by adrossig          #+#    #+#             */
/*   Updated: 2019/12/19 17:26:08 by adrossig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_lstlenght(t_list *list)
{
	unsigned int lenght;

	lenght = 0;
	while (list != NULL)
	{
		++lenght;
		list = list->next;
	}
	return (lenght);
}
