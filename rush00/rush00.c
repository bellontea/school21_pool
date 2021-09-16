/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mslyther <mslyther@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 10:43:02 by mslyther          #+#    #+#             */
/*   Updated: 2021/02/21 13:13:26 by mslyther         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char ch);

void	rush00(int j, int i)
{
	int k;
	int m;
	
	k = 0;
	m = 0;
	while (k < i)
	{
		while (m < j)
		{
			if (k == 0 || k == i - 1)
				if (m == 0 || m == j - 1)
					ft_putchar('o');
				else
					ft_putchar('-');
			else 
				if (m == 0 || m == j - 1)
					ft_putchar('|');
				else
					ft_putchar(' ');
			m++;
		}
		k++;
		m = 0;
		ft_putchar('\n');
	}
}
