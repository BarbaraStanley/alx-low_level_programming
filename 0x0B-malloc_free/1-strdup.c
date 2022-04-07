#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a newly-allocated space in memory
 * containing a copy of the string given as parameter
 * @str: The string to be copied.
 * Return: If str == NULL or insufficient memory is available - NULL
 * Otherwise - a pointer to the duplicated string
 */

char *_strdup(char *str)

{
	char *newarray;
	int index, len = 0;

	if (str == NULL)
		return (NULL);
	for (index = 0; str[index]; index++)
		len++;
	newarray = malloc(sizeof(char) * (len + 1));
	if (newarray == NULL)
		return (NULL);
	for (index = 0; str[index]; index++)
		newarray[index] = str[index];
	newarray[len] = '\0';

	return (newarray);
}
