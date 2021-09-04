#include <stdio.h>

/**
 *main - Starting point
 *Description - prints base 10 numbers
 *Return: Always 0
 */

int main(void)
{
char n;
for (n = 'z'; n >= 'a'; n--)
{
putchar((n));
}
putchar('\n');
return (0);
}
