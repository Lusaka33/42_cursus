/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_islower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrossig <adrossig@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/25 15:24:20 by adrossig          #+#    #+#             */
/*   Updated: 2021/01/15 10:08:58 by adrossig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_char.h"

/*
** Check if the character c is lower case.
** =========
** #1: the character to be analysed.
** =========
** Return 1 if this is the case (TRUE),
** 0 if not (FALSE).
*/

int	ft_islower(int i)
{
	if (i >= 'a' && i <= 'z')
		return (1);
	return (OK);
}
