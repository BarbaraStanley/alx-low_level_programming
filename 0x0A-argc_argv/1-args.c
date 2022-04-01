#include <stdio.h>

/**
 * main - program that prints the no. of arguments passed into it
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int b;

	if (argc == 1)
	{
		printf("%d\n", argc - 1);
	}
	else
	{
		for (b = 0; *argv; b++, argv++)
			printf("%d\n", b - 1);
	}
	return (0);
}
