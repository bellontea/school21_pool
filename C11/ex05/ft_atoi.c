/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mslyther <mslyther@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 18:05:52 by mslyther          #+#    #+#             */
/*   Updated: 2021/03/03 11:59:21 by mslyther         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	check_isspace(char **str)
{
	while (**str && ((**str >= 9 && **str <= 13) || **str == 32))
		(*str)++;
}

int		check_sign_char(char **str)
{
	int count_minus;

	count_minus = 0;
	while (**str && (**str == '+' || **str == '-'))
	{
		if (**str == '-')
			count_minus++;
		(*str)++;
	}
	if (count_minus % 2 != 0)
		return (-1);
	else
		return (0);
}

int		convert_to_int(char **str)
{
	int num;

	num = 0;
	while (**str && (**str >= '0' && **str <= '9'))
	{
		num *= 10;
		num += **str - '0';
		(*str)++;
	}
	return (num);
}

int		ft_atoi(char *str)
{
	int minus;
	int num;

	check_isspace(&str);
	minus = check_sign_char(&str);
	num = convert_to_int(&str);
	if (minus)
		num *= minus;
	return (num);
}
