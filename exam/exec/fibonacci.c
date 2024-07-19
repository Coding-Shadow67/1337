/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fibonacci.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asyani <asyani@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 17:19:55 by asyani            #+#    #+#             */
/*   Updated: 2024/07/13 17:26:46 by asyani           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int fibonacci(int n)
{
	if (n == 1 || n == 2)
		return (1);
	return (fibonacci(n - 2) + fibonacci(n - 1));
}

#include <stdio.h>

int main()
{
	int i = 6;

	printf("%d\n", fibonacci(i));
	return (0);
}
