#include "main.h"

/**
 * main - check Description
 *
 * Description: write a program that prints putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char nm = "Samuel";

	while (*nm)
	{
		_putchar(*nm);
		nm++;
		_putchar('\n');

		return (0);
