#include <stdio.h>
#include "main.h"

/**
 * _strcmp - ghvfmc
 * @s1: hghf
 * @s2: jhj
 * Return: 0
*/

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int diff;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		diff = s1[i] - s2[i];
		if (diff != 0)
		{
			break;
		}
		i++;
	}

	if (diff < 0)
		return (diff);
	else if (diff > 0)
		return (diff);
	else
		return (0);
}
