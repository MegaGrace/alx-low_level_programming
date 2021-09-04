#include <stdio.h>

/**
 *main - Starting point
 *Description - prints base 16 number in lowercase
 *Return: Always 0
 */

int main(void)
{
int i;
for (i = 48; i < 58; i++)
{
putchar(i);
}
for (i = 'a'; i <= 'f'; i++)
{
putchar(i);
}
putchar('\n');
return (0);
}
