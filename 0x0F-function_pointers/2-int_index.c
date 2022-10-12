#include <stdlib.h>
#include "function_pointers.h"

/**
*int_index - searches for an integer
*@array: array to search in
*@size: size of the array
*@cmp: pointer to the comparing function
*
*Return: index of the first element.
*-1 if no element is found or size <= 0.
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, res;

	res = -1;
	if (array && cmp)
	{
		if (size <= 0)
		{
			return (res);
		}
		for (i = 0; i < size; i++)
		{
			cmp(array[i]);
			if (cmp(array[i]) > 0)
			{
				res = i;
				break;
			}
			if ((cmp(array[i] == (-1)))
			{
				return (res);
			}
		}
	}
	return (res);
}
