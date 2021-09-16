/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mslyther <mslyther@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 12:53:40 by mslyther          #+#    #+#             */
/*   Updated: 2021/03/03 13:18:01 by mslyther         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		plus(int num1, int num2, char *sign)
{
	if (sign[0] == '+' && !sign[1])
	{
		ft_putnbr(num1 + num2);
		return (1);
	}
	return (0);
}

int		minus(int num1, int num2, char *sign)
{
	if (sign[0] == '-' && !sign[1])
	{
		ft_putnbr(num1 - num2);
		return (1);
	}
	return (0);
}

int		mult(int num1, int num2, char *sign)
{
	if (sign[0] == '*' && !sign[1])
	{
		ft_putnbr(num1 * num2);
		return (1);
	}
	return (0);
}

int		div(int num1, int num2, char *sign)
{
	if (sign[0] == '/' && !sign[1])
	{
		if (num2 != 0)
			ft_putnbr(num1 / num2);
		else
			print_error("Stop : division by zero\n");
		return (1);
	}
	return (0);
}

int		mod(int num1, int num2, char *sign)
{
	if (sign[0] == '%' && !sign[1])
	{
		if (num2 != 0)
			ft_putnbr(num1 % num2);
		else
			print_error("Stop : modulo by zero\n");
		return (1);
	}
	return (0);
}
