/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mslyther <mslyther@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/27 20:39:43 by mslyther          #+#    #+#             */
/*   Updated: 2021/02/27 21:01:10 by mslyther         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <unistd.h>

int		check_sign(int nb)
{
	if (nb < 0)
		return (-1);
	else
		return (1);
}

void	print_nbr(int nb)
{
	char	res;

	res = 0;
	if (nb < 0)
		write(1, "-", 1);
	if (nb == 0)
		write(1, "0", 1);
	while (nb != 0)
	{
		res = '0' + (nb % 10) * check_sign(nb);
		write(1, &res, 1);
		nb /= 10;
	}
	write(1, "\n", 1);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
	write(1, "\n", 1);
}

void	ft_show_tab(struct s_stock_str *par)
{
	int i;

	i = 0;
	while (par[i].str)
	{
		print_nbr(par[i].size);
		ft_putstr(par[i].str);
		ft_putstr(par[i].copy);
		i++;
	}
}
