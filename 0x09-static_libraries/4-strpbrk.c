#include <stdio.h>
#include "main.h"

/**
 * _strpbrk - htfrgw
 * @s: fnddfn
 * @accept: gmhx
 * Return: s
*/

char *_strpbrk(char *s, char *accept)
{
	int i, j;
	char *p;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				p = &s[i];
				return (p);
			}
		}

	}
	return (NULL);
}
