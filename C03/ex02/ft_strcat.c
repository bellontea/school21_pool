/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mslyther <mslyther@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 15:32:49 by mslyther          #+#    #+#             */
/*   Updated: 2021/02/22 11:05:22 by mslyther         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
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
	while (*dest != '\0')
	{
		dest++;
		i++;
	}
	ft_strcpy(dest, src);
	return (dest - i);
}
