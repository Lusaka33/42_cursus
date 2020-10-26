/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrossig <adrossig@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/25 15:33:07 by adrossig          #+#    #+#             */
/*   Updated: 2020/10/26 15:06:57 by adrossig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Écrit le caractère c.
** =========
** #1 : le caractère à écrire.
** =========
*/

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
