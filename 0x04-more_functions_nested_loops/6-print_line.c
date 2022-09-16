#include "main.h"

/**
 * print_line - a function that draws a straught line in the terminal.
 *
 * followed by a new line.
 *
 * @n: An input interger
 *
 * Return: Always 0
 */

void print_line(int n)
{
	int i = 0;

	if (n > 0)
	{
        	for (; 1 < n; i++)
			_putchar('_');
	}
	_putchar('\n');
}
