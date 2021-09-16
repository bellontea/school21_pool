/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mslyther <mslyther@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 14:08:01 by mslyther          #+#    #+#             */
/*   Updated: 2021/02/23 21:42:22 by mslyther         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		check_sign(int nb)
{
	if (nb < 0)
		return (-1);
	else
		return (1);
}

void	reverse(char *str, int size)
{
	size--;
	while (size >= 0)
	{
		write(1, &str[size], 1);
		size--;
	}
}

void	ft_putnbr(int nb)
{
	char	num[11];
	char	minus;
	int		i;
	int		mod;

	i = 0;
	mod = 0;
	minus = 0;
	if (nb < 0)
		write(1, "-", 1);
	if (nb == 0)
	{
		num[i] = '0';
		i++;
	}
	while (nb != 0)
	{
		mod = nb % 10;
		num[i] = '0' + (mod * check_sign(nb));
		nb /= 10;
		i++;
	}
	reverse(num, i);
}
