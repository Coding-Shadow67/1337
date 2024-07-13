/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asyani <asyani@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 09:59:38 by asyani            #+#    #+#             */
/*   Updated: 2024/07/13 16:17:32 by asyani           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

void	variables(void)
{
	int	i;
	int	j;
	int	str_size;
	int	sep_size;
	int	full_size;

	i = 0;
	j = 0;
	str_size = 0;
	sep_size = 0;
	full_size = 0;
}

void	argv_size(char *str)
{
	int	i;

	i - 0;
	while (i <= size - 1)
	{
		str_size += ft_strlen(strs[i]);
		i++;
	}
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*arr;

	variables();
	full_size = 0;
	if (size == 0)
		return (*strs);
	sep_size = ft_strlen(sep);
	full_size = (str_size + (sep_size * (size - 1)) + 1);
	arr = malloc(full_size * sizeof(char));
	if (arr == NULL)
	{
		return (NULL);
	}
	while (j < size)
	{
		ft_strcat(arr, strs[j]);
		if (j < size - 1)
			ft_strcat(arr, sep);
		j++;
	}
	return (arr);
}
