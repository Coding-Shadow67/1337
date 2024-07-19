/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asyani <asyani@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 13:25:47 by asyani            #+#    #+#             */
/*   Updated: 2024/07/16 17:09:42 by asyani           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

// Function to get the length of a null-terminated string
int ft_strlen(const char *str) {
    int len = 0;
    while (str[len] != '\0') {
        len++;
    }
    return len;
}

// Function to check if a character exists in a string
int ft_strchr_index(const char *str, char c) {
    int index = 0;
    while (str[index] != '\0') {
        if (str[index] == c) {
            return index;
        }
        index++;
    }
    return -1; // Character not found
}

// Function to convert a number in base_from to a decimal integer
int ft_atoi_base(const char *nbr, const char *base_from) {
    int result = 0;
    int base = ft_strlen(base_from);
    int sign = 1;
    int index = 0;

    // Handle sign
    if (nbr[0] == '-') {
        sign = -1;
        index++;
    }

    // Process digits
    while (nbr[index] != '\0') {
        int digit_value = ft_strchr_index(base_from, nbr[index]);
        if (digit_value == -1) {
            return 0; // Invalid digit found
        }
        result = result * base + digit_value;
        index++;
    }

    return result * sign;
}

// Function to convert a decimal integer to a string in base_to
char *ft_itoa_base(int value, const char *base_to) {
    int base = ft_strlen(base_to);
    int sign = (value < 0) ? -1 : 1;
    int size = 0;
    int tmp = value;

    // Determine required size of the result string
    do {
        tmp /= base;
        size++;
    } while (tmp != 0);

    // Allocate memory for the result string (+1 for null terminator)
    char *result = (char *)malloc((size + 1) * sizeof(char));
    result[size] = '\0';

    // Convert integer to base_to string
    if (value == 0) {
        result[0] = base_to[0];
    }
    else {
        if (sign == -1) {
            result[0] = '-';
            value = -value;
        }
        while (value != 0) {
            result[--size] = base_to[value % base];
            value /= base;
        }
    }

    return result;
}

// Function to convert number from base_from to base_to
char *ft_convert_base(char *nbr, char *base_from, char *base_to) {
    // Convert nbr from base_from to decimal integer
    int decimal_value = ft_atoi_base(nbr, base_from);

    // Check for invalid base or invalid number
    if (decimal_value == 0) {
        return NULL;
    }

    // Convert decimal integer to base_to
    char *converted = ft_itoa_base(decimal_value, base_to);

    return converted;
}

int main() {
    char *nbr = "11";  // Example number in base_from
    char *base_from = "0123456789";  // Base of the number (binary)
    char *base_to = "01";  // Base to convert to (decimal)

    char *result = ft_convert_base(nbr, base_from, base_to);
    if (result != NULL) {
        printf("Converted number: %s\n", result);
        free(result);  // Free allocated memory
    } else {
        printf("Conversion failed.\n");
    }

    return 0;
}
