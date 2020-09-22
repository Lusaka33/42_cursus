/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_files_input.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrossig <adrossig@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/25 15:19:34 by adrossig          #+#    #+#             */
/*   Updated: 2020/09/13 10:52:25 by adrossig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_files_input(int fd)
{
	char	*buffer;
	char	*tmp_buffer;
	char	c;
	int		i;

	tmp_buffer = NULL;
	while (read(fd, &c, 1) > 0)
	{
		i = tmp_buffer ? ft_strlen(tmp_buffer) : 0;
		if ((buffer = (char*)malloc(sizeof(char) * (i + 2))) == NULL)
		{
			if (tmp_buffer)
				free(tmp_buffer);
			return (NULL);
		}
		if (tmp_buffer)
		{
			ft_strcpy(buffer, tmp_buffer);
			free(tmp_buffer);
		}
		*(buffer + i) = c;
		*(buffer + (i + 1)) = '\0';
		tmp_buffer = buffer;
	}
	return (tmp_buffer ? buffer : NULL);
}
