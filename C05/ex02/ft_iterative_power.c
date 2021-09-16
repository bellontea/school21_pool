/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mslyther <mslyther@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 19:19:04 by mslyther          #+#    #+#             */
/*   Updated: 2021/02/23 19:24:54 by mslyther         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int p;

	p = 1;
	if (power < 0)
		return (0);
	while (power)
	{
		p *= nb;
		power--;
	}
	return (p);
}
