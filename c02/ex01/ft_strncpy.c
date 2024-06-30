/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asyani <asyani@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 18:47:50 by asyani            #+#    #+#             */
/*   Updated: 2024/06/30 08:11:36 by asyani           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int		i;

	i = 0;

	while (src[i] != '\0')
	{
		if (n > 0)
		{
			dest[i] = src[i];
		}
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int main()
{
	char str[] = "hello";
	char str1[10];

	ft_strncpy(str1, str, 2);
	printf("%s\n", str1);

	return 0;
}
