/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_struct.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjamis <tjamis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 18:11:20 by tjamis            #+#    #+#             */
/*   Updated: 2021/03/10 19:07:57 by tjamis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/bsq.h"

t_obstacle		*new_list(int i, int j)
{
	t_obstacle	*ptr;

	ptr = (t_obstacle *)malloc(sizeof(t_obstacle));
	if (!ptr)
		return (NULL);
	ptr->x = i;
	ptr->y = j;
	ptr->next = NULL;
	return (ptr);
}

void			add_v(t_obstacle **arr, int i, int j)
{
	if (!*arr)
	{
		*arr = new_list(i, j);
		return ;
	}
	add_v(&(*arr)->next, i, j);
}

int				ft_list_clear(t_obstacle *begin_list)
{
	t_obstacle *del_ptr;

	while (begin_list)
	{
		del_ptr = begin_list;
		begin_list = begin_list->next;
		free(del_ptr);
	}
	return (1);
}
