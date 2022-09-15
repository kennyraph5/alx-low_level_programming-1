#include "main'h"

/**
 * main - a function that checks for a digit (0 through 9)
 *
 * Description:  An input integer
 *
 * Return: Always return 0
 */
int _isdigit(int c)
{
	char i = '0';
	int isdigit = 0;

	for (; i <= '9'; i++)
	{
		if (i == c)
		{
			isdigit = 1;
			break;
		}
	}
	return (isdigit);
}
