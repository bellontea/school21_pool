/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mslyther <mslyther@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 22:09:16 by mslyther          #+#    #+#             */
/*   Updated: 2021/02/24 21:19:41 by mslyther         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int sqrt_num;

	sqrt_num = 1;
	while (sqrt_num * sqrt_num < nb && sqrt_num * sqrt_num > 0)
		sqrt_num++;
	if (sqrt_num * sqrt_num == nb)
		return (sqrt_num);
	return (0);
}
