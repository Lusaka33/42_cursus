/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_open_files.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrossig <adrossig@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/25 15:32:24 by adrossig          #+#    #+#             */
/*   Updated: 2020/10/28 18:05:17 by adrossig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_files.h"

int		ft_open_files(char *files, char right)
{
	int fd;

	fd = open(files, right);
	if (fd == -1)
	{
		ft_putstr("ERROR\n");
		close(fd);
	}
	return (fd);
}
