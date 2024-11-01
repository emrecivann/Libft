/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strlcpy.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emrecivan <emrecivan@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 09:31:43 by emrecivan         #+#    #+#             */
/*   Updated: 2024/10/17 10:05:10 by emrecivan        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h> // for standard strlcpy (if available)
#include "libft.h"  // Assuming ft_strlcpy is declared in this header

void test_ft_strlcpy()
{
    char buffer[20];
    const char *source = "Hello, world!";
    size_t result;

    // Test 1: Normal case (dstsize larger than src length)
    result = ft_strlcpy(buffer, source, sizeof(buffer));
    printf("Test 1: Expected: %zu, Result: %zu, Buffer: '%s'\n", strlen(source), result, buffer);

    // Test 2: Destination size smaller than source length
    result = ft_strlcpy(buffer, source, 6);                                                       // Only room for 5 chars + null terminator
    printf("Test 2: Expected: %zu, Result: %zu, Buffer: '%s'\n", strlen(source), result, buffer); // Buffer should be "Hello"

    // Test 3: Destination size is 0 (should return length of src but copy nothing)
    result = ft_strlcpy(buffer, source, 0);
    printf("Test 3: Expected: %zu, Result: %zu, Buffer unchanged: '%s'\n", strlen(source), result, buffer);

    // Test 4: Empty source string
    result = ft_strlcpy(buffer, "", sizeof(buffer));
    printf("Test 4: Expected: %d, Result: %zu, Buffer: '%s'\n", 0, result, buffer);

    // Test 5: Destination size is exactly the size of src + 1
    result = ft_strlcpy(buffer, source, strlen(source) + 1);
    printf("Test 5: Expected: %zu, Result: %zu, Buffer: '%s'\n", strlen(source), result, buffer);

    // Test 6: Source and destination are the same string (in-place copy)
    strcpy(buffer, source); // Set buffer equal to source
    result = ft_strlcpy(buffer, buffer, sizeof(buffer));
    printf("Test 6: Expected: %zu, Result: %zu, Buffer: '%s'\n", strlen(source), result, buffer);
}

int main()
{
    test_ft_strlcpy();
    return 0;
}