/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sum_array.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asyani <asyani@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 17:27:31 by asyani            #+#    #+#             */
/*   Updated: 2024/07/13 20:13:04 by asyani           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void putnbr(int nb)
{
    if (nb >= 10)
    {
        putnbr(nb / 10);
    }
    ft_putchar(nb % 10 + '0');
}

void printNumbers(int nb)
{
    putnbr(nb);  

    if (nb < 50)
    {
        ft_putchar(' ');
    }

    if (nb < 50)
    {
        printNumbers(nb + 1);
    }
}

int main() {
    printNumbers(1); 

    ft_putchar('\n');      
	return 0;
}

