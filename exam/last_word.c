/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asyani <asyani@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 10:04:46 by asyani            #+#    #+#             */
/*   Updated: 2024/07/12 11:49:56 by asyani           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	i;
	int j;
	int k;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i] != '\0')
		{
			i++;
		}
		i--;
		while (i >= 0 && (argv[1][j] == ' ' || argv[1][j] == '\t'))
		{
			i--;
		}
		while (j >= 0)
		{
			ft_putchar(argv[1][j]);
			j++;
		}
	}
	else
		ft_putchar('\n');
	return (0);
}
