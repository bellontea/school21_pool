/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mslyther <mslyther@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 18:05:52 by mslyther          #+#    #+#             */
/*   Updated: 2021/02/22 23:25:23 by mslyther         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	check_isspace(char **str)
{
	while (**str && ((**str >= 9 && **str <= 13) || **str == 32))
		(*str)++;
}

int		check_sign(char **str)
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

int		check_num(char ch)
{
	if ((ch >= '0' && ch <= '9'))
		return (1);
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
	minus = check_sign(&str);
	num = convert_to_int(&str);
	if (minus)
		num *= minus;
	return (num);
}
