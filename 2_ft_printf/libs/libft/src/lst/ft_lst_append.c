/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_append.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrossig <adrossig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/18 17:53:08 by adrossig          #+#    #+#             */
/*   Updated: 2019/12/18 17:53:08 by adrossig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstappend(t_list *head, t_list *last)
{
	t_list	*current;

	current = head;
	if (!current)
		return (last);
	while (current->next)
		current = current->next;
	current->next = last;
	return (head);
}
