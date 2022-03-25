#include "main.h"

/**
 * _strncpy - function that copies a string
 * @dest: the buffer storin the copied string
 * @src: source string
 * @n: maximum number of bytes to be copied from src
 * Return: a pointer to the resultin string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int index = 0, src_len = 0;

	while (src[index++])
		src_len++;
	for (index = 0; src[index] && index < n; index++)
		dest[index] = src[index];
	for (index = src_len; index < n; index++)
		dest[index] = '\0';
	return (dest);
}
