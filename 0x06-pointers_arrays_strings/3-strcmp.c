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

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] == s2[i])
			return (0);
		else if (s1[i] > s2[i])
			return ((s1[i] - s2[i]));
		else if (s1[i] < s2[i])
			return ((s1[i] - s2[i]));
	}
	return (0);
}
