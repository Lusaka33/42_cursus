/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrossig <adrossig@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/25 15:44:36 by adrossig          #+#    #+#             */
/*   Updated: 2020/10/16 11:53:21 by adrossig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Convertit la lettre c en MAJ, si possible.
** =========
** #1 : le carctère à convertir.
** =========
** Retourne la lettre convertie, ou celle de départ
** si la conversion n'était pas possible.
*/

int		ft_toupper(int i)
{
	if (i >= 'a' && i <= 'z')
		return (i - 32);
	return (i);
}
