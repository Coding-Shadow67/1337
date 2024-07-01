/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asyani <asyani@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 14:38:31 by asyani            #+#    #+#             */
/*   Updated: 2024/07/01 15:06:48 by asyani           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	n;
	unsigned int	length;

	n = 0;
	length = 0;
	while (length < size - 1)
	{
		if (src[length] != '\0')
		{
			n++;
		}
		length++;
	}
	return (n);
}
