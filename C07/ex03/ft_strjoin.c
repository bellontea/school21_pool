/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mslyther <mslyther@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 22:06:24 by mslyther          #+#    #+#             */
/*   Updated: 2021/02/26 23:20:15 by mslyther         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int count;

	count = 0;
	while (str[count])
		count++;
	return (count);
}

char	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i])
	{
		*dest = src[i];
		dest++;
		i++;
	}
	*dest = '\0';
	return (dest - i);
}

char	*ft_strcat(char *dest, char *src)
{
	int i;

	i = 0;
	while (dest[i])
		i++;
	ft_strcpy(&dest[i], src);
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		str_size;
	char	*str;

	i = 0;
	str_size = 1;
	while (i < size)
	{
		str_size += ft_strlen(strs[i]);
		i++;
	}
	str_size += ft_strlen(sep) * (size - 1);
	str = (char*)malloc(str_size);
	if (!str)
		return (NULL);
	i = 0;
	str[0] = '\0';
	while (i < size)
	{
		ft_strcat(str, strs[i]);
		if (i != (size - 1))
			ft_strcat(str, sep);
		i++;
	}
	return (str);
}
