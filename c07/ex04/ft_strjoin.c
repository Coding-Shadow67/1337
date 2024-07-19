/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asyani <asyani@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 20:21:26 by asyani            #+#    #+#             */
/*   Updated: 2024/07/14 16:24:34 by asyani           ###   ########.fr       */
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

int	calculate_total_size(int size, char **strs, char *sep)
{
	int	str_size;
	int	i;
	int	sep_size;

	sep_size = ft_strlen(sep);
	str_size = 0;
	i = 0;
	while (i < size)
	{
		str_size += ft_strlen(strs[i]);
		i++;
	}
	if (size > 0)
		return (str_size + sep_size * (size - 1) + 1);
	else
		return (1);
}

char	*concatenate_strings(int size, char **strs, char *sep)
{
	int		full_size;
	int		i;
	char	*arr;

	i = 0;
	full_size = calculate_total_size(size, strs, sep);
	arr = malloc(full_size * sizeof(char));
	if (arr == NULL)
	{
		return (NULL);
	}
	arr[i] = '\0';
	if (size == 0)
	{
		arr[0] = '\0';
		return (arr);
	}
	while (i < size)
	{
		ft_strcat(arr, strs[i]);
		if (i < size - 1)
			ft_strcat(arr, sep);
		i++;
	}
	return (arr);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	return (concatenate_strings(size, strs, sep));
}
