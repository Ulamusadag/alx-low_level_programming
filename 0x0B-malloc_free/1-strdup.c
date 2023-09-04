#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - hhh
 * @str: jkjk;
 * Return: `jj
*/

char *_strdup(char *str)
{
	char *dub;
	unsigned int i, len;

	i = 0;
	len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len])
		len++;

	dub = (char *) malloc(sizeof(char) * (len + 1));
	if (dub == NULL)
		return (NULL);
	while ((dub[i] = str[i]) != '\0')
		i++;

	return (dub);

}
