/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_c.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrossig <adrossig@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/27 12:16:49 by adrossig          #+#    #+#             */
/*   Updated: 2020/06/14 13:24:33 by adrossig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	put_padd(t_printf *p)
{
	int i;

	i = 0;
	while (i++ < p->w_value - 1)
		write(p->fd, " ", 1);
}

void		display_c(t_printf *p)
{
	int c;

	handle_wildcard(p);
	c = va_arg(p->ap, int);
	if (p->minus == 0)
	{
		put_padd(p);
		write(p->fd, &c, 1);
	}
	else if (p->minus == 1)
	{
		write(p->fd, &c, 1);
		put_padd(p);
	}
	p->len += (1 < p->w_value) ? p->w_value : 1;
}
