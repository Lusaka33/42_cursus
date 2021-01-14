/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrossig <adrossig@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/25 14:54:07 by adrossig          #+#    #+#             */
/*   Updated: 2021/01/14 14:00:35 by adrossig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_mem.h"

/*
** Remplit les n premiers octets de la zone mémoire
** pointée par s avec l'octet 0.
** =========
** #1 : la zone mémoire pointée.
** #2 : l'octet donné pour le remplissage.
** =========
*/

void	ft_bzero(void *s, size_t n)
{
	char	*temp;

	temp = s;
	while (n--)
		*temp++ = 0x0;
}
