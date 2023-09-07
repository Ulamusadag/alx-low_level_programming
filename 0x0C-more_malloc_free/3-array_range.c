#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * array_range - jgh
 * @min: bhj
 * @max: ghfhfd
 * Return: gjfhg
*/

int *array_range(int min, int max)
{
	int *ptr;
	int i;

	if (min > max)
		return (NULL);
	ptr = malloc(sizeof(int) * (max - min + 1));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i <= max; i++)
	{
		ptr[i] = min;
		min++;
	}
	return (ptr);
}
