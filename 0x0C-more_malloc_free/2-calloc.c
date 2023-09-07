#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _calloc - fsfs
 * @nmemb: jkhbj
 * @size: gnfgh
 * Return: hgjhg
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	if (nmemb == NULL || size == 0)
		return (0);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
		ptr[i] = 0;
	return (ptr);
}
