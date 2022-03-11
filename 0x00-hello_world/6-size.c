#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: always 0 (success)
 */
int main(void)
{
	printf("size of an integer:%ld\n byte(s)", sizeof(int));
	printf("size of a char:%ld\n byte(s)", sizeof(char));
	printf("size of long:%ld\n byte(s)", sizeof(long));
	printf("size of long long int:%ld\n byte(s)", sizeof(long long));
	printf("sixe of float:%ld\n byte(s)", sizeof(float));
	return (0);
}	
