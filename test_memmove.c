/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emrecivan <emrecivan@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 22:35:07 by emrecivan         #+#    #+#             */
/*   Updated: 2024/10/16 15:25:58 by emrecivan        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

void print_test_result(char *test_name, char *result, char *expected)
{
	if (strcmp(result, expected) == 0)
		printf("%s: Passed\n", test_name);
	else
		printf("%s: Failed\n", test_name);
}

int main(void)
{
	char buffer1[50] = "Hello, World!";
	char buffer2[50] = "Hello, World!";
	char overlap_test1[50] = "123456789";
	char overlap_test2[50] = "123456789";

	// Test 1: Non-overlapping regions
	ft_memmove(buffer1 + 7, buffer1, 6);
	memmove(buffer2 + 7, buffer2, 6); // Standard memmove for comparison
	print_test_result("Test 1 (Non-overlapping)", buffer1, buffer2);

	// Test 2: Overlapping regions (source < destination, backward copy)
	ft_memmove(overlap_test1 + 3, overlap_test1, 6);
	memmove(overlap_test2 + 3, overlap_test2, 6); // Standard memmove for comparison
	print_test_result("Test 2 (Overlap, backward)", overlap_test1, overlap_test2);

	// Test 3: Overlapping regions (source > destination, forward copy)
	strcpy(overlap_test1, "123456789");
	strcpy(overlap_test2, "123456789");
	ft_memmove(overlap_test1, overlap_test1 + 3, 6);
	memmove(overlap_test2, overlap_test2 + 3, 6); // Standard memmove for comparison
	print_test_result("Test 3 (Overlap, forward)", overlap_test1, overlap_test2);

	// Test 4: Edge case (null pointers)
	void *null_test = ft_memmove(NULL, NULL, 5);
	if (null_test == NULL)
		printf("Test 4 (NULL pointers): Passed\n");
	else
		printf("Test 4 (NULL pointers): Failed\n");

	// Test 5: Zero length
	strcpy(buffer1, "Hello, World!");
	strcpy(buffer2, "Hello, World!");
	ft_memmove(buffer1 + 5, buffer1, 0);
	memmove(buffer2 + 5, buffer2, 0);
	print_test_result("Test 5 (Zero length)", buffer1, buffer2);

	return 0;
}
