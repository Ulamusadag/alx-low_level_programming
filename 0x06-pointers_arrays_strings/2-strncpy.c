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
	int j = 0;

	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
