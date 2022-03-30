#include "main.h"

/**
 * _puts_recursion - function that prints a string followed by a new line
 * @s: string parameter
 * Return: nothing
 */

void _puts_recursion(char *s)
{
	_putchar(*s);
	_puts_recursion(s + 1);
}
