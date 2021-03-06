/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mslyther <mslyther@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 23:37:57 by mslyther          #+#    #+#             */
/*   Updated: 2021/02/24 20:38:15 by mslyther         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int nums;

	nums = 2;
	if (nb <= 1)
		return (0);
	while (nums < nb / 2)
	{
		if (nb % nums != 0)
			nums++;
		else
			return (0);
	}
	return (1);
}
