/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_file.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mslyther <mslyther@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 16:04:31 by mslyther          #+#    #+#             */
/*   Updated: 2021/03/02 20:57:44 by mslyther         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		check_file(int size, char **files)
{
	char	*error[3];
	int		fd;

	error[0] = "File name missing.\n";
	error[1] = "Too many arguments.\n";
	error[2] = "Cannot read file.\n";
	if (!size)
	{
		print_error(error[0]);
		return (-1);
	}
	if (size > 1)
	{
		print_error(error[1]);
		return (-1);
	}
	fd = open(files[1], O_RDONLY);
	if (fd == -1)
	{
		print_error(error[2]);
		return (fd);
	}
	return (fd);
}
