#include "main.h"
#include <stdlib.h>

/**
 *_abs - computes absolute values
 *@c: character
 *Return: absolute value or zero
 */
int _abs(int c)
{
if (c < 0)
{
int num;
num = c * -1;
return (num);
}
return (c);
}
