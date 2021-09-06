#include "main.h"

/**
 *swap_int - swaps two integers
 *@a: first integer
 *@b: second integer
 *
 *Return: always void
 */

void swap_int(int *a, int *b)
{
	int d;

	d = *a;
		*a = *b;
		*b = d;
}
