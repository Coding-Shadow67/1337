/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asyani <asyani@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 11:25:34 by asyani            #+#    #+#             */
/*   Updated: 2024/06/28 12:20:33 by asyani           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int		start;
	int		end;
	int		swap;

	start = 0;
	end = size - 1;
	while (start < end)
	{
		swap = tab[start];
		tab[start] = tab[end];
		tab[end] = swap;
		start++;
		end--;
	}
}

int main()
{
	int n[] = {2,3, 9, 6, 5, 4,6};
	int i;
	int size = sizeof(n) / sizeof(n[0]);

	ft_rev_int_tab(n, size);
	for (i = 0; i < size; i++)
	{
		printf("%d", n[i]);
	}
	return 0;
}
