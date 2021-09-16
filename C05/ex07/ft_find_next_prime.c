/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mslyther <mslyther@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 23:58:37 by mslyther          #+#    #+#             */
/*   Updated: 2021/02/24 20:49:47 by mslyther         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_find_next_prime(int nb)
{
	int nums;

	nums = 2;
	if (nb <= 1)
		nb = 2;
	while (nums < nb / 2)
	{
		if (nb % nums != 0)
			nums++;
		else
		{
			nb++;
			nums = 2;
		}
	}
	return (nb);
}
