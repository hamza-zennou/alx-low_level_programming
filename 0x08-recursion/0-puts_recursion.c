#include "main.h"	
#include <stddef.h>

/**
 * _puts_recursion - prints a string followed by newline recursively
 * @s: the string to print
 *
 * Return: void
 */
void _puts_recursion(char *n)
{
	if (*n == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*n);
		_puts_recursion(n + 1);
	}
}
