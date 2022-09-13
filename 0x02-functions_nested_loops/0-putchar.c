#include <unistd.h>

/**
 * main - check Description
 *
 * Description: write a program that prints putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char name = "Samuel";
	int i;

	for (i = 0; i < 5; i++)
		_putchar(name[i]);
	_putchar('\n');

	return (0);
}
