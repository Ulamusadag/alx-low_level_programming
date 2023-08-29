#include <stdio.h>
#include "main.h"

/**
*memcpy - fggndrgnd
*@dest: hgjh
*@src: hfftyj
*@n: gh
*Return:mdest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);

}
