/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asyani <asyani@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 13:23:40 by asyani            #+#    #+#             */
/*   Updated: 2024/06/28 13:51:12 by asyani           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
void	ft_sort_int_tab(int *tab, int size)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (i < size - 1)
	{
		while (j < size - i - 1)
		{
			if (tab[j] > tab[j + 1])
			{
				int swap = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = swap;
			}
			j++;
		}
		i++;
	}
}

int main()
{
	int arr[] = {6, 3,1, 7, 2};
	int size = sizeof(arr) / sizeof(arr[0]);
	
	ft_sort_int_tab(arr, size);
	for (int i = 0; i < size; i++)
	{
		printf("%d", arr[i]);
	}

	return 0;
}
