/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mslyther <mslyther@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 11:05:53 by mslyther          #+#    #+#             */
/*   Updated: 2021/02/23 21:48:21 by mslyther         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strlen(char *str)
{
	int count;

	count = 0;
	while (str[count])
		count++;
	return (count);
}

int		check_base(char *base)
{
	int	i;
	int j;
	int size;

	i = 0;
	j = 1;
	size = ft_strlen(base);
	if (base[0] && base[1])
		while (base[i])
		{
			if (base[i] != '+' && base[i] != '-')
				while (j < size)
				{
					if (base[i] == base[j])
						return (0);
					j++;
				}
			else
				return (0);
			i++;
			j = i + 1;
		}
	else
		return (0);
	return (size);
}

int		check_sign(int nbr)
{
	if (nbr < 0)
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

void	ft_putnbr_base(int nbr, char *base)
{
	int		i;
	int		base_num;
	int		minus;
	char	final_num[33];

	i = 0;
	minus = 0;
	base_num = check_base(base);
	if (base_num > 1)
	{
		if (nbr < 0)
			write(1, "-", 1);
		if (nbr == 0)
		{
			final_num[0] = base[0];
			i++;
		}
		while (nbr)
		{
			final_num[i] = base[(nbr % base_num) * check_sign(nbr)];
			nbr /= base_num;
			i++;
		}
		reverse(final_num, i);
	}
}
