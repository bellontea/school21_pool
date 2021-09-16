/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mslyther <mslyther@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 21:28:52 by mslyther          #+#    #+#             */
/*   Updated: 2021/02/20 22:37:17 by mslyther         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		char_is_alphanum(char *ch)
{
	if (!((*ch >= 'a' && *ch <= 'z') || (*ch >= 'A' && *ch <= 'Z')))
		if (!(*ch >= '0' && *ch <= '9'))
			return (0);
	return (1);
}

int		char_is_small(char *ch)
{
	if (*ch >= 'a' && *ch <= 'z')
		return (1);
	else
		return (0);
}

int		char_is_big(char *ch)
{
	if (*ch >= 'A' && *ch <= 'Z')
		return (1);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	if (char_is_small(&str[0]) == 1)
	{
		str[0] -= 32;
		i = 1;
	}
	while (str[i] != '\0')
	{
		if (char_is_big(&str[i]) == 1)
			str[i + 1] += 32;
		if (char_is_alphanum(&str[i]) == 0)
			if (char_is_alphanum(&str[i + 1]) == 1)
				if (char_is_small(&str[i + 1]) == 1)
				{
					str[i + 1] -= 32;
					i++;
				}
		i++;
	}
	return (str);
}
