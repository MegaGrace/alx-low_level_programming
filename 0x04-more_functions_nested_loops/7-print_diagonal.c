#include "main.h"

/**
 *print_diagonal - draws diagonal line
 *@n: number of times
 *Return: Always 0
 */

void print_diagonal(int n)
{
int a, b;
if (n <= 0)
{
_putchar('\n');
}
else
{
for (a = 0; a < n; a++)
{
for (b = 0; b < a; b++)
{
_putchar(32);
}
_putchar(92);
_putchar('\n');
}
}
}
