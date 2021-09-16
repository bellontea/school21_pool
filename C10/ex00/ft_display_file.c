/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mslyther <mslyther@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 15:47:00 by mslyther          #+#    #+#             */
/*   Updated: 2021/03/02 20:23:52 by mslyther         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		ft_display_file(int size, char **files)
{
	int		fd;
	char	ch;

	fd = check_file(size, files);
	if (fd == -1)
		return (-1);
	while (read(fd, &ch, 1) != 0)
		write(1, &ch, 1);
	return (0);
}
