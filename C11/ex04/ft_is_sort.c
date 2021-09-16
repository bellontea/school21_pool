/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mslyther <mslyther@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 17:33:34 by mslyther          #+#    #+#             */
/*   Updated: 2021/03/03 22:10:22 by mslyther         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int i;

	i = 0;
	while (i < length - 1 && (f(tab[i], tab[i + 1]) <= 0))
		i++;
	if (i == length - 1 && (f(tab[i - 1], tab[i]) <= 0))
		return (1);
	i = 0;
	while (i < length - 1 && (f(tab[i], tab[i + 1]) >= 0))
		i++;
	if (i == length - 1 && (f(tab[i - 1], tab[i]) >= 0))
		return (1);
	return (0);
}
