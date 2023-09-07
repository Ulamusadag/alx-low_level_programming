#include <stdio.h>
#include <stdlib>
#include "main.h"

/**
 * malloc_checked - ghh,gv
 * @b: gvgj,jh
 * Return: jkhjbhj
*/

void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);

	return (ptr);
}
