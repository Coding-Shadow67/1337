/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_last.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asyani <asyani@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 10:55:57 by asyani            #+#    #+#             */
/*   Updated: 2024/07/17 11:28:34 by asyani           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc < 1)
	{
		ft_putchar('\n');
	}
	else
	{
		while (argv[1][i] != '\0')
		{
			i++;
		}
		while (i > 0 && argv[1][i - 1] == ' ')
		{
			i--;
		}
		while (i > 0 && argv[1][i - 1] != ' ')
		{
			i--;
		}

		while (argv[1][i] != '\0' && argv[1][i] != ' ')
		{
			ft_putchar(argv[1][i]);
			i++;
		}
		ft_putchar('\n');
	}
}
