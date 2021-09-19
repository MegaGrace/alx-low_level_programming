#include <stdio.h>

/**
 * main - program that prints the number of arguments passed to it
 * @argc: argument count
 * @argv: array of string  arguments
 * Return: Always 0 if successful
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
