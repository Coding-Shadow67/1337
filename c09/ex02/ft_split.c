/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asyani <asyani@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 12:16:32 by asyani            #+#    #+#             */
/*   Updated: 2024/07/18 17:06:05 by asyani           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_valid(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strdup(char *str, char *charset)
{
	int		i;
	int		j;
	char	*dup;

	i = 0;
	while (!is_valid(str[i], charset) && str[i])
		i++;
	dup = (char *)malloc(sizeof(char) * (i + 1));
	j = 0;
	while (j < i)
	{
		dup[j] = str[j];
		j++;
	}
	dup[j] = '\0';
	return (dup);
}

unsigned int	count_size(char *str, char *charset)
{
	int				temp;
	unsigned int	count;

	temp = 0;
	count = 0;
	while (str[temp])
	{
		while (is_valid(str[temp], charset) && str[temp])
			temp++;
		if (!is_valid(str[temp], charset) && str[temp])
			count++;
		while (!is_valid(str[temp], charset) && str[temp])
			temp++;
	}
	return (count);
}

char	**ft_split(char *str, char *charset)
{
	int					index;
	unsigned int		count;
	int					temp;
	char				**arr;

	index = 0;
	temp = 0;
	count = count_size(str, charset);
	arr = (char **)malloc(sizeof(char *) * (count + 1));
	while (str[index])
	{
		while (is_valid(str[index], charset) && str[index])
			index++;
		if (!is_valid(str[index], charset) && str[index])
		{
			arr[temp] = ft_strdup(str + index, charset);
			temp++;
		}
		while (!is_valid(str[index], charset) && str[index])
			index++;
	}
	arr[temp] = NULL;
	return (arr);
}
