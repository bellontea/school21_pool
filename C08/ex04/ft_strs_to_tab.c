/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mslyther <mslyther@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/27 16:17:48 by mslyther          #+#    #+#             */
/*   Updated: 2021/02/27 20:10:17 by mslyther         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int						ft_strlen(char *str)
{
	int count;

	count = 0;
	while (str[count])
		count++;
	return (count);
}

char					*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char					*ft_strdup(char *src)
{
	char *dup;

	dup = (char*)malloc(ft_strlen(src) + 1);
	if (!dup)
		return (NULL);
	return (ft_strcpy(dup, src));
}

struct s_stock_str		*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*strs_struct;

	i = 0;
	if (ac < 0)
		return (NULL);
	strs_struct = malloc(sizeof(t_stock_str) * (ac + 1));
	while (i < ac)
	{
		strs_struct[i].size = ft_strlen(av[i]);
		strs_struct[i].str = ft_strdup(av[i]);
		strs_struct[i].copy = ft_strdup(strs_struct[i].str);
		i++;
	}
	strs_struct[i].str = 0;
	return (strs_struct);
}
