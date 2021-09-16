/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   std_input.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjamis <tjamis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 15:48:57 by tjamis            #+#    #+#             */
/*   Updated: 2021/03/10 15:49:05 by tjamis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/bsq.h"

void	std_input(void)
{
	int		file;
	char	buffer[10000];
	int		size;

	file = open("std_input", O_WRONLY | O_TRUNC);
	while ((size = read(0, buffer, 10000)) != 0)
		write(file, buffer, size);
	close(file);
}
