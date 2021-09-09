#include "main.h"
int _strlen(char *s);

/**
 * _strcat - concatenates two strings
 * @dest: pointer to dest string
 * @src: pointer to src string
 * Return: the pointer to dest
 */

char *_strcat(char *dest, char *src)
{
	int x;
	int cnt = _strlen(dest);
	int cnt2 = _strlen(src);
	int n = 0;

	for (x = cnt; x <= cnt + cnt2; x++, n++)
		dest[x] = src[n];
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
