#include <stdio.h>
#include "main.h"

/**
 * _strncpy - hjgh
 * @dest: ghfgf
 * @src: hughf
 * @n: juyyu
 * Return: 0
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while ( i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
