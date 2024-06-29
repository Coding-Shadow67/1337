/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asyani <asyani@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 09:23:31 by asyani            #+#    #+#             */
/*   Updated: 2024/06/29 14:56:59 by asyani           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void rush(int x, int y)
{
    int i, j, k;
    i = 0;
    j = 0;
    k = 0;

    printf("o");
    while (i < x - 2)
    {
        printf("-");
        i++;
    }
    printf("o\n");
    while (j <  y - 2)
    {
        printf("|");
        while (k < x - 2)
        {
            printf(" ");
            k++;
        }
        printf("|\n");
        j++;
    }
    printf("o");
    while (i < x - 2)
    {
        printf("-");
        i++;
    }
    printf("o\n");
}


int main()
{
	int x = 5;
	int y = 3;

	rush(x, y);

	return 0;
}
