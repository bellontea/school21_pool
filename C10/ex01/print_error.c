/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mslyther <mslyther@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 13:38:24 by mslyther          #+#    #+#             */
/*   Updated: 2021/03/02 21:10:52 by mslyther         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	print(char *str)
{
	while (*str)
	{
		write(2, str, 1);
		str++;
	}
}

void	print_error(int i, char **argv)
{
	print(basename(argv[0]));
	print(": ");
	print(argv[i]);
	print(": ");
	print(strerror(errno));
	print("\n");
}
