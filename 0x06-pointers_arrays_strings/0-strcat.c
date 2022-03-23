#include "main.h"

/**
 * _strcat - function that concatenates two strings
 * @dest: string parameter
 * @src: string to be appended
 * Return: pointer to the dest string
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int d = 0;

	while (dest[i++])
	{
		d++;
	}
	for (i = 0; src[i]; i++)
	{
		dest[d++] = src[i];
	}
	return (dest);
}
