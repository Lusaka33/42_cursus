/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_files.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrossig <adrossig@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/25 15:34:57 by adrossig          #+#    #+#             */
/*   Updated: 2020/10/28 18:05:26 by adrossig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_files.h"

char	*ft_read_file(char *filename)
{
	int		fd;
	char	*buffer;

	fd = open(filename, 'r');
	if (fd < 0)
		return (NULL);
	buffer = ft_files_input(fd);
	if (buffer == NULL)
	{
		close(fd);
		return (NULL);
	}
	close(fd);
	return (buffer);
}
