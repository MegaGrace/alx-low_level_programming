#include "main.h"

/**
 *main - Entry point
 *@n: integer
 *Return: Always 0
 */

void reset_to_98(int *n)
{
	int v = 98;
	*n = &v;
}
