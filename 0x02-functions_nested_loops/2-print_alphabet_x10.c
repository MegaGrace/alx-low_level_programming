#include "main.h"

/**
 *print_alphabet_x10 - prints alphabet 10 times
 */

void print_alphabet_x10(void)
{
int p = 0;
char num;
while (p++ <= 9)
{
for (num = 'a'; num <= 'z'; num++)
{
_putchar(num);
}
_putchar('\n');
}
}
