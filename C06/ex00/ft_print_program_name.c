/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mslyther <mslyther@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 22:32:59 by mslyther          #+#    #+#             */
/*   Updated: 2021/02/24 22:44:44 by mslyther         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char **argv)
{
	(void)argc;
	while (**argv)
	{
		write(1, *argv, 1);
		(*argv)++;
	}
	write(1, "\n", 1);
	return (0);
}
