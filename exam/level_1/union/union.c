/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asyani <asyani@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 15:59:41 by asyani            #+#    #+#             */
/*   Updated: 2024/07/18 16:37:27 by asyani           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}


int	main(int argc, char **argv)
{
	if (argc != 3)
	{
		ft_putchar('\n');
	}

	char *str = argv[1];
	char *src = argv[2];

	int i = 0;
	int j = 0;
	int count[256] = {0};

	while (str[i] != '\0')
	{
		if (!count[(unsigned char)str[i]])
		{
			ft_putchar(str[i]);
			count[(unsigned char)str[i]]++;
		}
		i++;
	}
	while (src[j] != '\0')
	{
		if (!count[(unsigned char)src[j]])
		{
			ft_putchar(src[j]);
			count[(unsigned char)src[j]]++;
		}
		j++;
	}
	return 0;
}
		
