/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asyani <asyani@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 21:12:11 by asyani            #+#    #+#             */
/*   Updated: 2024/06/27 21:41:34 by asyani           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}

int main()
{
	int n;
	int *a = &n;
	int **a1 = &a;
	int ***a2 = &a1;
	int ****a3 = &a2;
	int *****a4 = &a3;
	int ******a5 = &a4;
	int *******a6 = &a5;
	int ********a7 = &a6;
	int *********a8 = &a7;
	ft_ultimate_ft(a8);
	printf("%d\n", *********a8);


	return 0;
}
