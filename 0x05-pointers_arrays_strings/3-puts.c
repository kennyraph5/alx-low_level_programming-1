#include "main.h"
#include <stdio.h>

/**
 * _puts - Write a function that prints a string, followed
 *
 * by a new line, to stdout.
 *
 * @str: an input string
 *
 * Return: Nothing
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		putchar(str[i]);
		i++;
		putchar('\n');
	}
}
=======

>>>>>>> 6f08dc771fd99f20725f5665d72699b5a68ddf45
