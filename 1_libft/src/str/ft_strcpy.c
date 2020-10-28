/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrossig <adrossig@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/25 15:37:02 by adrossig          #+#    #+#             */
/*   Updated: 2020/10/28 10:22:56 by adrossig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_str.h"

/*
** Copie la chaîne pointée par src (y compris l'octet nul final)
** dans la chaîne pointée par dst.
** Les deux chaînes ne doivent pas se chevaucher.
** La chaîne dest doit être assez grande pour accueillir la copie.
** =========
** #1 : la chaîne de destination.
** #2 : la chaîne source.
** =========
** Retourne la longueur de n.
*/

char	*ft_strcpy(char *dest, const char *src)
{
	return (ft_memcpy(dest, src, ft_strlen(src) + 1));
}
