#include "main.h"
#include <unistd.h>

/**
*_putchar - prints variables
*@c: char character
*Return: Always 0
*/

int _putchar(char c)
{

return (write(1, &c, 1));
}
