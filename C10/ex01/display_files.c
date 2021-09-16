/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_files.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mslyther <mslyther@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 23:10:13 by mslyther          #+#    #+#             */
/*   Updated: 2021/03/02 21:09:31 by mslyther         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		display_files(int i, char **argv)
{
	int		fd1;
	int		fd2;
	char	ch;

	fd1 = open(argv[i], O_RDONLY);
	if (fd1 == -1)
	{
		print_error(i, argv);
		return (-1);
	}
	while ((fd2 = read(fd1, &ch, 1)) && fd2 != -1)
		write(1, &ch, 1);
	if (fd2 == -1)
	{
		print_error(i, argv);
		return (-1);
	}
	fd1 = close(fd1);
	if (fd1 == -1)
	{
		print_error(i, argv);
		return (-1);
	}
	return (0);
}
