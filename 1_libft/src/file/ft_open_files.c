/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_open_files.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrossig <adrossig@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/25 15:32:24 by adrossig          #+#    #+#             */
/*   Updated: 2021/01/14 12:48:23 by adrossig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_files.h"

int	ft_open_files(char *files, char right)
{
	int	fd;

	fd = open(files, right);
	if (fd == -1)
	{
		ft_putstr("ERROR\n");
		close(fd);
	}
	return (fd);
}
