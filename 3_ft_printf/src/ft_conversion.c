/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conversion.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrossig <adrossig@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/27 12:12:25 by adrossig          #+#    #+#             */
/*   Updated: 2020/06/22 11:50:00 by adrossig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

/*
**	Lenght conversions for signed numbers.
*/

intmax_t	get_conv_signed(t_printf *p)
{
	handle_wildcard(p);
	if (p->specifier == HH)
		return ((char)va_arg(p->ap, intmax_t));
	else if (p->specifier == H)
		return ((short)va_arg(p->ap, intmax_t));
	else if (p->specifier == J)
		return (va_arg(p->ap, intmax_t));
	else if (p->specifier == L)
		return ((long)(va_arg(p->ap, intmax_t)));
	else if (p->specifier == LL)
		return ((long long)(va_arg(p->ap, intmax_t)));
	else if (p->specifier == Z)
		return ((size_t)(va_arg(p->ap, intmax_t)));
	return (va_arg(p->ap, int));
}

/*
**	Lenght conversions for unsigned numbers.
*/

uintmax_t	get_conv_unsigned(t_printf *p)
{
	handle_wildcard(p);
	if (p->specifier == HH)
		return ((unsigned char)va_arg(p->ap, uintmax_t));
	else if (p->specifier == H)
		return ((unsigned short)va_arg(p->ap, uintmax_t));
	else if (p->specifier == J)
		return (va_arg(p->ap, uintmax_t));
	else if (p->specifier == L)
		return ((unsigned long)va_arg(p->ap, uintmax_t));
	else if (p->specifier == LL)
		return ((unsigned long long)va_arg(p->ap, uintmax_t));
	else if (p->specifier == Z)
		return ((size_t)va_arg(p->ap, uintmax_t));
	return (va_arg(p->ap, unsigned int));
}

/*
**	Lenght conversions for floats.
*/

long double	get_conv_double(t_printf *p)
{
	handle_wildcard(p);
	if (p->specifier == LD)
		return (va_arg(p->ap, long double));
	else
		return (va_arg(p->ap, double));
}
