#include <unistd.h>

/**
 *_putchar - writes the character c to stdout
 *@c: the character to print
 *Return: on Success 1
 *On error, -1
 */

int _putchar(int c)
{
return (write(1, &c, 1));
}
