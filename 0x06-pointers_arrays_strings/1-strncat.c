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
	int len, i;

	i = len = 0;

	while (dest[len] != '\0')
	{
		++len;
	}

	while (src[i] != 0 && i < n)
	{
		dest[len] = src[i];
		++i;
		++len;
	}
	dest[len] = '\0';
	return (dest);
}
