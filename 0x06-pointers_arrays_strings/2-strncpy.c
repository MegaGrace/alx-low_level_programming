#include "main.h"

/**
 *_strncat - copies string
 *@dest: first character
 *@src: second character
 *@n: number of bytes
 *
 *Return: returns destination
 */

char *_strncat(char *dest, char *src, int n)
{
	int x = 0;

	for (; x < n && src[x] != '\0'; ++x)
	{
		dest[x] = src[x];
	}

	while (x < n)
	{
		dest[x] = '\0';
		++x;
	}


	return (dest);
}
