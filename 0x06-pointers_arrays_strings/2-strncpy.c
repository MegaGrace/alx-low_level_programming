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
	while (dest[n] != '\0')
	{
		dest[n] = src[n];
		n++;
	}
	src[n] = '\0';
	return (src);
}
