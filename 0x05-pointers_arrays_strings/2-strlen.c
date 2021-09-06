#include "main.h"

/**
 *_strlen - returns length of string
 *@s: first pointer
 *
 *Return: Always 0
 */

int _strlen(char *s)
{
	int c = 0;

	for (; *s != '\0'; s++)
		c++;
	return (c);
}
