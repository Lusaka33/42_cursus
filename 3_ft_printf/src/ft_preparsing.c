/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_preparsing.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrossig <adrossig@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/27 12:13:09 by adrossig          #+#    #+#             */
/*   Updated: 2020/06/22 11:58:45 by adrossig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

/*
**	Helper to handle the wildcard bonus.
*/

void	handle_wildcard(t_printf *p)
{
	int tmp;

	tmp = 0;
	if (p->w_star == 1)
	{
		tmp = va_arg(p->ap, int);
		if (!p->w_value)
			p->w_value = tmp;
		else
			return ;
		if (p->w_value < 0)
		{
			p->minus = 1;
			p->w_value = ft_abs(p->w_value);
		}
	}
	if (p->p_star == 1)
	{
		p->p_value = va_arg(p->ap, int);
		if (p->p_value < 0)
		{
			p->wc_p_neg = 1;
			p->p_value = ft_abs(p->p_value);
		}
	}
}

/*
** Searches for % and prints string until it finds % or the string ends.
*/

void	handle_pct(t_printf *p)
{
	p->i++;
	if (p->f[p->i] != '\0')
	{
		parse_flags(p);
		if (p->f[p->i] != '\0')
			parse_width(p);
		if (p->f[p->i] != '\0')
			parse_precision(p);
		if (p->f[p->i] != '\0')
			parse_length(p);
		if (p->f[p->i] != '\0')
		{
			dispatcher(p);
			p->i++;
		}
		reinitialize(p);
	}
}

/*
** Searches for % and prints string until it finds % or the string ends.
*/

int		parser(t_printf *p)
{
	while (p->f[p->i])
	{
		if (p->f[p->i] == '%')
			handle_pct(p);
		else
			print_until_pct(p);
	}
	return (p->len);
}
