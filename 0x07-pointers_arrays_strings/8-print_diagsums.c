#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - a function that prints the sum of the two diagonals
 * of a square matrix of integers.
 * @a: a square matrix of integers
 * @size: an input integer with the size of matrix
 * Return: Nothing
 */

void print_diagsums(int *a, int size)
{
	int i = 0;
	int j = size - 1;
	long int result1 = 0;
	long int result2 = 0;

	while (i < (size * size))
	{
		result1 += *(a + i);
		i += (size + 1);
	}
	printf("%ld", result1);

	while (j < (size * size) - 1)
	{
		result2 += *(a + j);
		j += (size - 1);
	}
	printf(", %ld\n", result2);
}
