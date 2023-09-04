#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * create_array - gjjh
 * @size: bhg
 * @c: hj
 * Return: n
*/

char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	p = (char *) malloc(sizeof(char) * size);

	if (p == NULL)
		return (0);

	while (i < size)
	{
		*(p + i) = c;
		i++;
	}
	*(p + i) = '\0';

	return (p);
}
