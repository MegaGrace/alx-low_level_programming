#include "main.h"

/**
 *is_prime_number - Afunction that checks if a number is prime.
 *@n: an input integer
 *Return: 1 if n is prime or  0 in otherwise
 */

int is_prime_number(int n)
{
	int i;

	i = n / 2;

	if (i == 1)
		return (1);
	if (n % i == 0)
		return (0);
	i = i - 1;
	is_prime_number(n);
	return (0);
}
