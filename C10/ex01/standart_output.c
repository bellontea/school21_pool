/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   standart_output.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mslyther <mslyther@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 23:29:13 by mslyther          #+#    #+#             */
/*   Updated: 2021/03/02 20:56:20 by mslyther         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void		standart_output(void)
{
	char ch;

	while (read(0, &ch, 1) != 0)
		write(1, &ch, 1);
}
