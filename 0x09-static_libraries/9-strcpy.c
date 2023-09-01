#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * _strcpy - dfjh,jh,b
 * @dest: gmfnfg
 * @src: ghg,hg
 * Return: 0
*/

char *_strcpy(char *dest, char *src)
{
	char *p = dest;

	while (*src != '\0')
	{
		*p++ = *src++;
	}
	*p = '\0';

	return (dest);

}
