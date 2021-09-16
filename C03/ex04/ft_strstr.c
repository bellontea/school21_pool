/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mslyther <mslyther@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 16:58:13 by mslyther          #+#    #+#             */
/*   Updated: 2021/02/21 20:35:09 by mslyther         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		save_i;
	int		j;
	char	*index;

	i = 0;
	j = 0;
	save_i = 0;
	while (str[i++] && to_find[j])
		if (str[i] == to_find[j])
		{
			if (index == 0)
			{
				index = &str[i];
				save_i = i;
			}
			j++;
		}
		else if (index != 0)
		{
			index = 0;
			j = 0;
			i = save_i;
		}
	return (index);
}
