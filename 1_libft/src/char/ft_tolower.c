/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrossig <adrossig@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/25 15:44:21 by adrossig          #+#    #+#             */
/*   Updated: 2020/10/16 11:53:11 by adrossig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Convertit la lettre c en MIN, si possible.
** =========
** #1 : le carctère à convertir.
** =========
** Retourne la lettre convertie, ou celle de départ
** si la conversion n'était pas possible.
*/

int		ft_tolower(int i)
{
	if (i >= 'A' && i <= 'Z')
		return (i + 32);
	return (i);
}
