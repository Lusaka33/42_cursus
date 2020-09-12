/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_p.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrossig <adrossig@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/27 12:10:37 by adrossig          #+#    #+#             */
/*   Updated: 2020/06/14 13:35:42 by adrossig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
**	Print padding.
*/

static void	put_padd(t_printf *p, char c, int len)
{
	int i;

	i = 0;
	if (p->w_value > len)
		while (i++ < (p->w_value - len))
			write(p->fd, &c, 1);
}

/*
**	Main print function when minus = 0.
*/

static void	put_ptr(t_printf *p, char *str, int len)
{
	put_padd(p, ' ', len);
	write(p->fd, "0x", 2);
	while (*str)
		write(p->fd, str++, 1);
	if (p->w_value >= p->p_value + 2 || p->w_value >= len)
		p->len += (p->w_value > len) ? p->w_value : len;
	else if (p->p_value >= len - 2)
		p->len += p->p_value + 2;
	else
		p->len += len;
}

/*
**	Main print function when minus = 1.
*/

static void	put_ptr_minus(t_printf *p, char *str, int len)
{
	write(p->fd, "0x", 2);
	while (*str)
		write(p->fd, str++, 1);
	put_padd(p, ' ', len);
	if (p->w_value >= p->p_value + 2 || p->w_value >= len)
		p->len += (p->w_value > len) ? p->w_value : len;
	else if (p->p_value >= len - 2)
		p->len += p->p_value + 2;
	else
		p->len += len;
}

/*
**	Main display function for %p
*/

void		display_p(t_printf *p)
{
	char		*ptr;
	char		*ptr_p;
	int			len;
	uintmax_t	point;

	handle_wildcard(p);
	point = va_arg(p->ap, uintmax_t);
	if (point == 0 && p->prec && p->p_value == 0)
	{
		write(p->fd, "0x", 2);
		p->len += 2;
		return ;
	}
	ptr = ft_itoa_base(point, 16);
	len = ft_strlen(ptr);
	if (p->prec && p->p_value > len)
	{
		ptr_p = fill_zeros(ptr, p->p_value, len);
		free(ptr);
		ptr = ft_strdup(ptr_p);
		free(ptr_p);
		len = ft_strlen(ptr);
	}
	p->minus == 0 ? put_ptr(p, ptr, len + 2) : put_ptr_minus(p, ptr, len + 2);
	free(ptr);
}
