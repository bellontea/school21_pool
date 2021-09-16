/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mslyther <mslyther@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 17:01:18 by mslyther          #+#    #+#             */
/*   Updated: 2021/03/02 17:13:08 by mslyther         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_count_if(char **tab, int length, int (*f)(char*))
{
	int res;
	int i;
	int count;

	i = 0;
	count = 0;
	while (i < length)
	{
		res = f(tab[i]);
		if (res != 0)
			count++;
		i++;
	}
	return (count);
}
