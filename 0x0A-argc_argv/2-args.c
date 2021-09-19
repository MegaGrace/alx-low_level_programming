#include <stdio.h>

/**
 * main - program that prints all the arguments it receives
 * @argc: argument count
 * @argv: array of string  arguments
 * Return: Always 0 if successful
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
