/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_f.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrossig <adrossig@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/27 12:09:42 by adrossig          #+#    #+#             */
/*   Updated: 2020/06/14 13:32:59 by adrossig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	put_padd(t_printf *p, char c, int len)
{
	int i;
	int z;

	i = 0;
	z = (p->p_value > len) ? p->p_value : len;
	if (p->w_value > len)
		while (i++ < (p->w_value - z))
			write(p->fd, &c, 1);
}

static void	put_float(t_printf *p, char *str, int len)
{
	if (p->space && p->neg == 0 && p->plus == 0)
	{
		write(p->fd, " ", 1);
		len++;
	}
	else if (p->plus && p->neg == 0 && p->prec == 0)
		write(p->fd, "+", 1);
	else if (p->plus && p->neg == 0 && p->zero)
		write(p->fd, "+", 1);
	if ((p->hash && p->p_value == 0) || (p->plus && p->neg == 0))
		len++;
	if (p->neg && p->zero)
		write(p->fd, "-", 1);
	(p->zero == 0) ? put_padd(p, ' ', len) : put_padd(p, '0', len);
	if (p->neg && p->zero == 0)
		write(p->fd, "-", 1);
	if (p->plus || p->neg)
		p->space = 0;
	if (p->plus && p->neg == 0 && p->prec && p->zero == 0)
		write(p->fd, "+", 1);
	while (*str)
		write(p->fd, str++, 1);
	if (p->hash && p->p_value == 0)
		write(p->fd, ".", 1);
}

static void	put_float_minus(t_printf *p, char *str, int len)
{
	if (p->space && p->neg == 0 && p->plus == 0)
	{
		write(p->fd, " ", 1);
		len++;
	}
	else if (p->plus && p->neg == 0)
	{
		write(p->fd, "+", 1);
		len++;
	}
	if (p->neg)
	{
		write(p->fd, "-", 1);
		p->space = 0;
	}
	while (*str)
		write(p->fd, str++, 1);
	if (p->hash && p->p_value == 0)
	{
		write(p->fd, ".", 1);
		len++;
	}
	put_padd(p, ' ', len);
}

void		display_f(t_printf *p)
{
	char		*f;
	int			len;
	long double	d;

	if (p->prec == 0)
	{
		p->p_value = 6;
		p->prec = 1;
	}
	d = get_conv_double(p);
	if (d < 0)
		p->neg = 1;
	f = ft_ftoa(d, p->p_value, p->prec);
	len = (p->neg == 0) ? ft_strlen(f) : (ft_strlen(f) + 1);
	p->minus == 0 ? put_float(p, f, len) : put_float_minus(p, f, len);
	p->len += (p->w_value > len + p->space) ? p->w_value : (len + p->space);
	if (len + 1 > p->w_value && p->plus)
		p->len++;
	free(f);
}
