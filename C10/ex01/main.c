/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mslyther <mslyther@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 23:33:16 by mslyther          #+#    #+#             */
/*   Updated: 2021/03/02 20:57:21 by mslyther         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		main(int argc, char **argv)
{
	int i;

	i = 1;
	if (argc == 1)
		standart_output();
	while (i < argc)
	{
		if (argv[i][0] == '-' && argv[i][1] == '\0')
			standart_output();
		else
			display_files(i, argv);
		i++;
	}
	write(1, "\n", 1);
}
