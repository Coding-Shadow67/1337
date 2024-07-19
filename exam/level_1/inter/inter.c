/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asyani <asyani@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 16:04:56 by asyani            #+#    #+#             */
/*   Updated: 2024/07/18 15:58:08 by asyani           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int main(int argc, char **argv)
{
    if (argc != 3)
    {
        ft_putchar('\n');
        return 0;
    }

    char *str = argv[1];
    char *src = argv[2];

    int count[256] = {0};  

    int i = 0;
    while (str[i] != '\0')
    {
        int j = 0;
        while (src[j] != '\0')
        {
            if (str[i] == src[j] && !count[(unsigned char)str[i]])
            {
                ft_putchar(str[i]);
                count[(unsigned char)str[i]]++; 
                break; 
            }
            j++;
        }
        i++;
    }

    ft_putchar('\n');

    return 0;
}

