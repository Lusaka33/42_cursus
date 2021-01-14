/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrossig <adrossig@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/08 10:48:38 by adrossig          #+#    #+#             */
/*   Updated: 2021/01/14 11:58:51 by adrossig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

/*
** free_and_return_null(1)
** =========
*/

void	free_and_return_null(char **s)
{
	if (*s && s)
	{
		free(*s);
		*s = NULL;
	}
}

/*
** ft_strlen(1)
** =========
*/

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	if (!s)
		return (0);
	while (*(s + i) != '\0')
		i++;
	return (i);
}

/*
** is_there_line(1)
** =========
*/

int	is_there_line(char *s)
{
	int	i;

	i = 0;
	while (*(s + i))
	{
		if (*(s + i) == '\n')
			return (1);
		i++;
	}
	return (0);
}

/*
** find_char_index(1)
** =========
*/

int	find_char_index(char *s, char c, char d)
{
	int	i;

	i = 0;
	while (*(s + i))
	{
		if (*(s + i) == c || *(s + i) == d)
			return (i);
		i++;
	}
	return (-1);
}
