#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strncat - hvgjm
 * @dest: fhfdg
 * @src: ghdgdf
 * @n: vhg
 * Return: 0
*/

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)

	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;

	}
	dest[i] = '\0';

	return (dest);

}
