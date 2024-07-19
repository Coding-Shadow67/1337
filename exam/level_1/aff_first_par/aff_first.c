/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_first.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asyani <asyani@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 10:07:30 by asyani            #+#    #+#             */
/*   Updated: 2024/07/17 10:55:05 by asyani           ###   ########.fr       */
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
	if (argc <  1)
	{
		ft_putchar('\n');
	}
	else
	{
		while (argv[1][i] != '\0')
		{
			if (argv[1][i] != ' ')
			{
				ft_putchar(argv[1][i]);
			}
			else
				ft_putchar(' ');
			i++;
		}
		ft_putchar('\n');
	}
}
