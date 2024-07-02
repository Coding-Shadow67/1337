/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asyani <asyani@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 19:51:39 by asyani            #+#    #+#             */
/*   Updated: 2024/07/02 16:14:40 by asyani           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
char    is_printable(char c)
{
    if (c > 32 && c <= 126)
    {
        return (c);
    }
    return (0);
}

void    to_hex(int n)
{

}

void ft_putstr_non_printable(char *str)
{
    int i;
    int count;

    count = 0;
    i = 0;
    while (str[i] != '\0')
    {
        if (is_printable(str[i]))
        {
            ft_putchar(str[i]);
        }
        else if (!is_printable(str[i]))
        {
			if (str[i] >= 10)
			{
        }
    }
}

