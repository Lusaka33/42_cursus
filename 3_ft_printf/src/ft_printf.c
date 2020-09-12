/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrossig <adrossig@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/27 12:13:34 by adrossig          #+#    #+#             */
/*   Updated: 2020/06/22 11:52:22 by adrossig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
**	Re-initializing data values if multiple arguments.
*/

void			reinitialize(t_printf *p)
{
	p->caps = 0;
	p->hash = 0;
	p->minus = 0;
	p->neg = 0;
	p->nil = 0;
	p->plus = 0;
	p->prec = 0;
	p->p_star = 0;
	p->p_value = 0;
	p->space = 0;
	p->specifier = 0;
	p->wdth = 0;
	p->w_star = 0;
	p->w_value = 0;
	p->zero = 0;
}

/*
**	Initializing data values. Ready for collecting.
*/

static t_printf	*initialize(t_printf *p)
{
	p->caps = 0;
	p->hash = 0;
	p->i = 0;
	p->len = 0;
	p->minus = 0;
	p->neg = 0;
	p->nil = 0;
	p->plus = 0;
	p->prec = 0;
	p->p_star = 0;
	p->p_value = 0;
	p->space = 0;
	p->specifier = 0;
	p->wdth = 0;
	p->w_star = 0;
	p->w_value = 0;
	p->zero = 0;
	return (p);
}

/*
**	Main dprintf function. Prints into chosen file descriptor.
*/

int				ft_dprintf(int fd, const char *format, ...)
{
	t_printf *p;

	if (!(p = (t_printf*)malloc(sizeof(t_printf))))
		exit(-1);
	p->f = (char *)format;
	p->fd = fd;
	p = initialize(p);
	if (format)
	{
		va_start(p->ap, format);
		p->len = parser(p);
		va_end(p->ap);
	}
	free(p);
	return (p->len);
}

/*
**	Main printf function.
*/

int				ft_printf(const char *format, ...)
{
	t_printf *p;

	if (!(p = (t_printf*)malloc(sizeof(t_printf))))
		exit(-1);
	p->f = (char *)format;
	p->fd = 1;
	p = initialize(p);
	if (format)
	{
		va_start(p->ap, format);
		p->len = parser(p);
		va_end(p->ap);
	}
	free(p);
	return (p->len);
}
