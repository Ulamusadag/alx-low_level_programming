#include <stdio.h>
#include "main.h"

/**
 * cap_string - hhgg,c
 * @str: gvhgf
 * Return: 0
*/

char *cap_string(char *str)
{
	char spr[13] = {' ', '\t', '\n', ',', ';', '.',
	'!', '?', '"', '(', ')', '{', '}'};
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; spr[j] < 13; j++)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				return (char (str[i] -= 32));
			if (str[i] == spr[j])
			{
				return (char (str[i]));
			}
		}
	}
	str[i] = '\0';

	return (str);


}
