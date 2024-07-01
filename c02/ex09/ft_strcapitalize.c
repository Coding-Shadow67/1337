/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asyani <asyani@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 08:19:26 by asyani            #+#    #+#             */
/*   Updated: 2024/07/01 14:30:26 by asyani           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	is_alpha(char c)
{
	if ((c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z'))
	{
		ft_putchar(c);
	}
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	c = 1;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(is_alpha(str[i])))
		{
			str[i++];
		}
		if (is_alpha(str[i]) == c)
		{
	}
}	
