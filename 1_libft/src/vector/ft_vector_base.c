/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrossig <adrossig@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/15 10:54:31 by adrossig          #+#    #+#             */
/*   Updated: 2020/10/28 18:10:21 by adrossig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_vector.h"

int		ft_vector_init(t_vector *vector, size_t max, t_free free, t_dup dup)
{
	if (!vector || !free || !max)
		return (KO);
	if (!(vector->a = ft_memalloc((max + 1) * sizeof(void*))))
		return (KO);
	vector->max = max;
	vector->len = 0;
	vector->free = free;
	vector->dup = dup;
	while (max-- > 0)
		vector->a[max] = NULL;
	return (OK);
}

int		ft_vector_extend(t_vector *vector)
{
	size_t	i;
	void	**anew;

	if (!vector)
		return (KO);
	if (!(anew = ft_memalloc((2 * vector->max + 1) * sizeof(void*))))
		return (KO);
	vector->max *= 2;
	i = 0;
	while (i < vector->len)
	{
		*(anew + i) = vector->a[i];
		i++;
	}
	while (i <= vector->max)
		*(anew + i++) = NULL;
	ft_memdel((void**)&(vector->a));
	vector->a = anew;
	return (OK);
}

int		ft_vector_cpy(t_vector *w, t_vector *vector)
{
	size_t	i;

	if (!vector || !vector->a)
		return (KO);
	if (ft_vector_init(w, vector->max, vector->free, vector->dup) == KO)
		return (KO);
	i = 0;
	while (i < vector->len)
	{
		w->a[i] = vector->dup(vector->a[i]);
		i++;
	}
	while (i < vector->max)
		w->a[i++] = NULL;
	return (OK);
}
