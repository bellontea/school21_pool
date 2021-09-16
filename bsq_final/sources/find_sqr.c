/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_sqr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjamis <tjamis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 19:12:42 by mslyther          #+#    #+#             */
/*   Updated: 2021/03/10 16:34:26 by tjamis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/bsq.h"

int		find_min(t_lines *lines, int i)
{
	int min;

	if (i == 0)
		return (0);
	min = lines->line1[i - 1] < lines->line1[i] ? lines->line1[i - 1]
			: lines->line1[i];
	min = min < lines->line2[i - 1] ? min : lines->line2[i - 1];
	return (min);
}

void	swap(t_lines *lines)
{
	int *temp;

	temp = lines->line1;
	lines->line1 = lines->line2;
	lines->line2 = temp;
}

void	set_sqr(t_sqr *sqr, t_lines *lines, int i, int y)
{
	sqr->size = lines->line2[i];
	sqr->x = i;
	sqr->y = y;
}

int		find_sqr(t_lines *lines, t_map *map, t_sqr *sqr, int y)
{
	char	check;
	int		i;

	while (y < map->line)
	{
		read(map->file, lines->buffer, map->colum);
		if (!read(map->file, &check, 1) || check != '\n')
			return (0);
		i = -1;
		while (++i < map->colum)
			if (lines->buffer[i] == map->valid[OBSTACLE])
				lines->line2[i] = 0;
			else if (lines->buffer[i] == map->valid[EMPTY])
			{
				lines->line2[i] = 1 + find_min(lines, i);
				if (lines->line2[i] > sqr->size)
					set_sqr(sqr, lines, i, y);
			}
			else
				return (0);
		swap(lines);
		y++;
	}
	return (1);
}
