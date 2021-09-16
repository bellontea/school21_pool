/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mslyther <mslyther@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 19:11:33 by mslyther          #+#    #+#             */
/*   Updated: 2021/03/04 22:01:47 by mslyther         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_reverse(t_list **begin_list)
{
	t_list *temp1;
	t_list *temp2;
	t_list *temp3;

	if (!*begin_list || !(*begin_list)->next)
		return ;
	temp1 = *begin_list;
	temp2 = (*begin_list)->next;
	temp3 = temp2->next;
	while (temp3)
	{
		temp2->next = temp1;
		temp1 = temp2;
		temp2 = temp3;
		temp3 = temp3->next;
	}
	(*begin_list)->next = NULL;
	temp2->next = temp1;
	*begin_list = temp2;
}
