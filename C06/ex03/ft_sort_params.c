/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mslyther <mslyther@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 23:58:53 by mslyther          #+#    #+#             */
/*   Updated: 2021/02/25 23:11:32 by mslyther         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		my_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] && s2[i])
		i++;
	return (s1[i] - s2[i]);
}

void	swap(char **a, char **b)
{
	char *c;

	c = *a;
	*a = *b;
	*b = c;
}

void	sort(char **str, int size)
{
	int i;
	int j;
	int min;

	i = 1;
	while (i < size)
	{
		min = i;
		j = i + 1;
		while (j < size)
		{
			if (my_strcmp(str[j], str[min]) < 0)
				min = j;
			j++;
		}
		swap(&str[i], &str[min]);
		i++;
	}
}

void	put_str(char *str)
{
	int j;

	j = 0;
	while (str[j])
	{
		write(1, &str[j], 1);
		j++;
	}
	write(1, "\n", 1);
}

int		main(int argc, char **argv)
{
	int i;

	i = 1;
	sort(argv, argc);
	while (i < argc)
	{
		put_str(argv[i]);
		i++;
	}
}
