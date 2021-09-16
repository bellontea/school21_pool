/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mslyther <mslyther@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 12:14:28 by mslyther          #+#    #+#             */
/*   Updated: 2021/02/18 20:16:18 by mslyther         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	output(char *num)
{
	write(1, &num[0], 1);
	write(1, &num[1], 1);
	write(1, " ", 1);
	write(1, &num[2], 1);
	write(1, &num[3], 1);
	if ((num[0] != '9') || (num[1] != '8'))
		write(1, ", ", 2);
}

void	check_num(char *num, int i, int j)
{
	if (num[j] > '9')
	{
		num[i]++;
		num[j] = '0';
	}
}

void	ft_print_comb2(void)
{
	char num[4];

	num[0] = '0';
	num[1] = '0';
	while (num[0] <= '9')
	{
		num[2] = num[0];
		num[3] = num[1] + 1;
		if (num[1] == '9')
		{
			num[2] = num[2] + 1;
			num[3] = '0';
		}
		while (num[2] <= '9')
		{
			output(num);
			num[3]++;
			check_num(num, 2, 3);
		}
		num[1]++;
		check_num(num, 0, 1);
	}
}
