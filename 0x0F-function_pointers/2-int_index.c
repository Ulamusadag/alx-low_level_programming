#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - hhhghv
 * @array: ngvgh
 * @size: ghjh
 * @cmp:tfhg
 * Return: hkjbjh
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp && size)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);

}
