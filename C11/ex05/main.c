/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mslyther <mslyther@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 22:00:57 by mslyther          #+#    #+#             */
/*   Updated: 2021/03/03 13:24:45 by mslyther         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		main(int argc, char **argv)
{
	int num1;
	int num2;
	int res;
	int i;

	if (argc != 4)
		return (-1);

	num1 = ft_atoi(argv[1]);
	num2 = ft_atoi(argv[3]);
	res = 0;
	i = 0;
	int (*operations[5]) (int, int, char*) = {plus, minus, mult, div, mod};
	while (res != 1 && i < 5)
	{
		res = operations[i](num1, num2, argv[2]);
		i++;
	}
	if (!res)
		write(1, "0\n", 2);
	return (0);
}
