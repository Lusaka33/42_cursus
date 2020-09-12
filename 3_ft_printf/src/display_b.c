/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_b.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrossig <adrossig@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/14 13:22:04 by adrienr           #+#    #+#             */
/*   Updated: 2020/06/30 15:21:56 by adrossig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	put_padd(t_printf *p, char c, int len)
{
	int i;

	i = 0;
	if (p->w_value > len)
		while (i++ < (p->w_value - len))
			write(p->fd, &c, 1);
}

static void	put_bin(t_printf *p, char *str, int len)
{
	if (!p->minus)
	{
		p->prec == 0 && p->zero ? put_padd(p, '0', len) : put_padd(p, ' ', len);
		while (*str)
			write(p->fd, str++, 1);
	}
	else
	{
		while (*str)
			write(p->fd, str++, 1);
		put_padd(p, ' ', len);
	}
}

void		display_b(t_printf *p)
{
	char		*bin;
	char		*bin_p;
	int			len;
	uintmax_t	b;

	handle_wildcard(p);
	b = get_conv_unsigned(p);
	bin = ft_itoa_base(b, 2);
	len = ft_strlen(bin);
	if (p->prec && p->p_value > len)
	{
		bin_p = fill_zeros(bin, p->p_value, len);
		free(bin);
		bin = ft_strdup(bin_p);
		free(bin_p);
		len = ft_strlen(bin);
	}
	p->len = (p->w_value > len) ? p->w_value : len;
	put_bin(p, bin, len);
	free(bin);
}
