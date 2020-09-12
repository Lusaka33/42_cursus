/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_pct.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrossig <adrossig@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/27 12:10:57 by adrossig          #+#    #+#             */
/*   Updated: 2020/06/14 13:36:10 by adrossig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
**	Prints % if %%.
*/

void	display_pct(t_printf *p)
{
	int i;

	i = 0;
	handle_wildcard(p);
	if (p->minus)
	{
		write(p->fd, "%", 1);
		while (i++ < p->w_value - 1)
			write(p->fd, " ", 1);
	}
	else if (p->minus == 0)
	{
		while (i++ < p->w_value - 1)
			p->zero ? write(p->fd, "0", 1) : write(p->fd, " ", 1);
		write(p->fd, "%", 1);
	}
	p->len += (p->w_value > 1) ? p->w_value : 1;
}
