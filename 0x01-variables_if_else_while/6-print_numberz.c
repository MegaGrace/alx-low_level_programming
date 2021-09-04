#include <stdio.h>

/**
 *main - Starting point
 *Description - prints base 10 numbers
 *Return: Always 0
 */

int main(void)
{
int n;
for (n = 0; n <= 9; n++)
{
putchar((n % 10) + '0');
}
putchar('\n');
return (0);
}
