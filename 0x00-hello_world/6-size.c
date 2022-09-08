#include <stdio.h>

/**
 * main - pint the size of various types
 *
 * Description: prints the size of various types on the computer it is compiled
 *
 * and run on
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
printf("size of a char: %d 1 byte(s)\n", sizeof(char));
printf("size of an int: %d 4 byte(s)\n", sizeof(int));
printf("size of a long int: %d 8 byte(s)\n", sizeof(long int));
printf("size of a long long int: %d 8 byte(s)\n", sizeof(long long int));
printf("size of a float: %d 4 byte(s)\n", sizeof(float));
return (0);
}
