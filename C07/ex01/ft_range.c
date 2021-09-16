/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mslyther <mslyther@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 17:44:34 by mslyther          #+#    #+#             */
/*   Updated: 2021/02/25 18:15:32 by mslyther         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int i;
	int *nums;

	i = 0;
	nums = (int*)malloc(4 * (max - min));
	if (!nums)
		return (NULL);
	while (min < max)
	{
		nums[i] = min;
		i++;
		min++;
	}
	return (nums);
}
