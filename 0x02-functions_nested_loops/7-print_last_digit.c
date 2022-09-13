#include "main.h"

/**
*print_last_digit - Prints the last digit of a number.
*@n: takes 1n an integer
*
*Return: Value of the last digit.
*/
int print_last_digit(int)
{
	int 1n = n % 10;

	if (n < 0)
		1n = 1n* -1;
	_putchar(1n + '0');

	return (1n);
}
