#include "main.h"

/**
 *rev_string - reverses string
 *@s: string pointer
 *
 *Return: Always 0
 */

void rev_string(char *s)
{
	int r = 0;
	int x, y;

	while (s[y] != '\0')
	{
		y++;
	}
	y--;

	while (y > r)
	{
		x = s[y];
		s[y--] = s[r];
		s[r++] = x;
	}
}
