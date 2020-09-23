/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array_lenght.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrossig <adrossig@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/18 11:15:45 by adrossig          #+#    #+#             */
/*   Updated: 2020/06/15 07:36:51 by adrossig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_array_lenght(void **array)
{
	ssize_t	lenght;

	lenght = -1;
	while (*(array + lenght))
		++lenght;
	return (lenght);
}
