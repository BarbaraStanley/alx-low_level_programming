#include<stdlib.h>
#include <stdio.h>
#include <time.h>
/*
 * main - Entry point, print if the variable n is positive or negative
 *
 * Return: always 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	        printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
	        printf("%d is 0", n);
	return (0);
}

