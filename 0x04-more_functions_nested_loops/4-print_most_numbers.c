#include "main.h"

/**
 *print_most_numbers - prints from 0 to 9
 *
 */

void print_most_numbers(void)
{
int num;
for (num = 0; num <= 9; num++)
{
if (num == 2 || num == 4)
{
continue;
}
else
{
_putchar(num + '0');
}
}
_putchar('\n');
}
