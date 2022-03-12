#include<stdlib.h>
#include <stdio.h>
#include <time.h>
/*
 * main - Entry point
 *
 * Return: always 0
 */
int main(void)
{
        int n;

        srand(time(0));
        n = rand() - RAND_MAX / 2;
        if (n > 0)
                printf("%d is positive", n);
        else if (n < 0)
                printf("%d is negative", n);
        else
                printf("%d is 0", n);
        return (0);
}

