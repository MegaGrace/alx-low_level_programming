#include "main.h"
int square(int n, int val);

/**
 * _sqrt_recursion - It returns the value of square root of n.
 * @n: an input integer
 * Return: The square root of n
 */

int _sqrt_recursion(int n)
{
	return (square(n, 1));
}

/**
 *square - find square root
 *@n: int to find square root
 *@val: square root
 *Return: int
 */

int square(int n, int val)
{
	if (val * val == n)
		return (val);
	else if (val * val < n)
		return (square(n, val + 1));
	else
		return (-1);
}
