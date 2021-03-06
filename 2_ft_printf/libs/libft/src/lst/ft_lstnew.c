/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrossig <adrossig@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/25 15:29:22 by adrossig          #+#    #+#             */
/*   Updated: 2020/10/16 12:28:12 by adrossig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Alloue (avec malloc(3)) et renvoie un nouvel
** élément. la variable content est initialisée à
** l’aide de la valeur du paramètre content.
** La variable next est initialisée à NULL.
** =======
** #1 : un pointeur sur la donnée contenue dans le maillon. 
** =======
** Retourne un nouvel élément de type t_list.
*/

t_list	*ft_lstnew(void *content)
{
	t_list *liste;

	liste = NULL;
	if (!(liste = malloc(sizeof(t_list))))
		return (NULL);
	liste->content = content;
	liste->next = NULL;
	return (liste);
}
