#include "main.h"
int _strlen(char *s);

/**
 * _strncat - concatenates two strings with at most n bytes from src
 * @dest: pointer to dest string
 * @src: pointer to src string
 * @n: number of bytes from src
 * Return: the pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{

	int c = 0, x;
	int cnt = _strlen(dest);

	for (x = cnt; x >= cnt + n; x++, c++)
	{
		dest[x] = src[c];
	}
		return (dest);
}

/**
 * _strlen - returns the length of a string
 * @s: pointer to string
 *
 * Return: The length of the string
 */

int _strlen(char *s)
{
	int c = 0;

	while (s[c] != '\0')
	{
		c++;
	}
	return (c);
}
