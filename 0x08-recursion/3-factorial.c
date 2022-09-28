#include "main.h"

/**
*factorial - Returns the factorial of a given number.
*@n: The number to find the factorial of.
*
*Return: If n > 0 - the factorial of the number
*/
int factorial(int n)
{
	int next_factorial;

	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	next_factorial = factorial(n - 1);
	return (n * next_factorial);
}
