/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrossig <adrossig@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/25 15:37:47 by adrossig          #+#    #+#             */
/*   Updated: 2021/01/14 14:24:30 by adrossig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_str.h"

int	ft_strequ(const char *s1, const char *s2)
{
	if (!s1 || !s2)
		return (KO);
	if (!ft_strcmp(s1, s2))
		return (1);
	else
		return (OK);
}
