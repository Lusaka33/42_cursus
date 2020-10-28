/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrossig <adrossig@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/25 15:34:39 by adrossig          #+#    #+#             */
/*   Updated: 2020/10/28 18:09:08 by adrossig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_print.h"

/*
** Écrit la chaîne de caractères str.
** =========
** #1 : la chaîne à écrire.
** =========
*/

void	ft_putstr(const char *str)
{
	if (str != NULL)
		write(1, str, ft_strlen(str));
}
