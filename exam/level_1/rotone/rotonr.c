/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotonr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asyani <asyani@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 13:03:59 by asyani            #+#    #+#             */
/*   Updated: 2024/07/17 14:10:04 by asyani           ###   ########.fr       */
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
	if (argc != 2)
	{
		ft_putchar('\0');
	}
	else
	{
		while (argv[1][i] != '\0')
		{
			char character = argv[1][i];
			if (character >= 'a' && character <= 'z')
			{
				if (character == 'z')
					ft_putchar('a');
				else
					ft_putchar(character + 1);
			}
			else if (character >= 'A' && character <= 'Z')
			{
				if (character == 'Z')
					ft_putchar('A');
				else
					ft_putchar(character + 1);
			}
			i++;
		}
		ft_putchar('\n');
	}
	return (0);
}
