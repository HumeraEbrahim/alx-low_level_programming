#include "function_pointers.h"

/**
*int_index - searches for an integer
*@array: array to search in
*@size: size of the array
*@cmp: pointer to the comparing function
*
*Return: index of the first element.
*-1 if no element is found or size <= 0
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}

	return (-1);
}
