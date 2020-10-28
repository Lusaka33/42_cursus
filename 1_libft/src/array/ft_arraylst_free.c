/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arraylst_free.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrossig <adrossig@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/18 11:31:46 by adrossig          #+#    #+#             */
/*   Updated: 2020/10/28 18:00:02 by adrossig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_array.h"

void	ft_arraylst_free(t_array *arraylist)
{
	if (arraylist != NULL)
	{
		free(arraylist->data);
		free(arraylist);
	}
}
