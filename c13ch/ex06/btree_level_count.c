/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_level_count.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mslyther <mslyther@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/05 22:54:27 by mslyther          #+#    #+#             */
/*   Updated: 2021/03/05 23:23:24 by mslyther         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

int		btree_level_count(t_btree *root)
{
	int count;
	int max_left;
	int max_right;

	max_left = 0;
	max_right = 0;
	if (!root)
		return (0);
	count = btree_level_count(root->left);
	max_left += count;
	count = btree_level_count(root->right);
	max_right += count;
	if (max_left < max_right)
		return (1 + max_right);
	else
		return (1 + max_left);
}
