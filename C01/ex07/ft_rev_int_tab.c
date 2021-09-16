/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mslyther <mslyther@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/19 20:18:46 by mslyther          #+#    #+#             */
/*   Updated: 2021/02/20 11:55:15 by mslyther         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int i;
	int j;
	int k;

	i = 0;
	j = size - 1;
	k = size / 2;
	while (k > 0)
	{
		ft_swap(&tab[i], &tab[j]);
		i++;
		j--;
		k--;
	}
}
