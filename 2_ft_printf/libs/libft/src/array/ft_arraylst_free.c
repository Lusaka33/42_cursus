/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arraylst_free.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrossig <adrossig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/18 11:31:46 by adrossig          #+#    #+#             */
/*   Updated: 2019/12/19 17:21:10 by adrossig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_arraylst_free(t_array *arraylist)
{
	if (arraylist != NULL)
	{
		free(arraylist->data);
		free(arraylist);
	}
}
