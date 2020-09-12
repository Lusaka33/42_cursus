/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_putstr_fd.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrossig <adrossig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/18 10:51:05 by adrossig          #+#    #+#             */
/*   Updated: 2019/12/18 10:51:05 by adrossig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lst_putstr_fd(t_list *elem, int fd)
{
	if (!elem)
		return ;
	else
		ft_putstr_fd((char *)elem->content, fd);
}
