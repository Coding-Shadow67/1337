/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asyani <asyani@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 16:59:44 by asyani            #+#    #+#             */
/*   Updated: 2024/07/09 17:28:41 by asyani           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	ac;
	int	i;

	ac = 1;
	while (ac < argc)
	{
		i = 0;
		while (argv[ac][i] != '\0')
		{
			write(1, &argv[ac][i], 1);
			i++;
		}
		write(1, "\n", 1);
		ac++;
	}
	return (0);
}
