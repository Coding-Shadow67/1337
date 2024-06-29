/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asyani <asyani@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 10:10:44 by asyani            #+#    #+#             */
/*   Updated: 2024/06/29 10:16:49 by asyani           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main() {
    int x = 54321;
    int arr[10];  

    int temp = x; 
    int i = 0;
	int j = 0;	

    while (temp != 0) {
        arr[i] = temp % 10;  // Get the last digit
        temp = temp / 10;    // Remove the last digit
        i++;                 // Move to the next index in arr[]
    }

    printf("Digits of %d are: ", x);
    for (j = i - 1; j >= 0; j--) {
        printf("%d ", arr[j]);
    }
    printf("\n");

    printf("First digit of %d is: %d\n", x, arr[j]);

    return 0;
}
