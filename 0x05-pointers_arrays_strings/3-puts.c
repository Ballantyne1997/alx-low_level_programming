#include "main.h"

/**
 * _puts - Prints a string, followed by a new line to stdout
 * @str: The string to print
 * Return: void
 */

void _puts(char *str)

{
	for (; *str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
