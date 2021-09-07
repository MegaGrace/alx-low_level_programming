#include "main.h"

/**
 *rev_string - reverses string
 *@s: string pointer
 *
 *Return: Always 0
 */

void rev_string(char *s)
{
	int count = 0;
	int x;
	int y = 0;
	char *pStart;

	while (s[count] != '\0')
	{
		count++;
	}
	x = count - 1;

	for (y = 0; y < count; y++)
	{
		pStart[y] = s[x];

		x--;
	}
}
