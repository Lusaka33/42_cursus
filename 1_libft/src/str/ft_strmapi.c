/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrossig <adrossig@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/25 15:40:06 by adrossig          #+#    #+#             */
/*   Updated: 2020/10/26 15:10:04 by adrossig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Applique la fonction f à chaque caractère de la
** chaine de caractères passée en argument pour créer
** une nouvelle chaine de caractères (avec malloc(3))
** résultant des applications successives de f.
** =========
** #1 : la chaine de caractères sur laquelle itérer
** #2 : la fonction à appliquer à chaque caractère
** =========
** Retourne La chaine de caractères résultant des applications
** successives de f, NULL si l’allocationéchoue
*/

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	char	*str;
	size_t	size;

	if (!s || !f)
		return (NULL);
	size = ft_strlen(s);
	str = ft_strnew(size);
	while (size--)
		*(str + size) = f(size, *(s + size));
	return (str);
}
