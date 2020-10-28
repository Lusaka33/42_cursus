/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrossig <adrossig@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/18 10:55:03 by adrossig          #+#    #+#             */
/*   Updated: 2020/10/28 18:08:58 by adrossig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_print.h"

/*
** Écrit la chaîne de caractères s.
** =========
** #1 : la chaîne à écrire.
** =========
*/

void	ft_putendl(const char *s)
{
	ft_putendl_fd(s, 1);
}
