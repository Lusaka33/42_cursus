/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uncrypt_str.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrossig <adrossig@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/18 11:20:42 by adrossig          #+#    #+#             */
/*   Updated: 2020/10/28 18:03:56 by adrossig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_crypt.h"

void	ft_uncrypt_str(int decalage, char *tab)
{
	ft_crypt_str(decalage * -1, tab);
}
