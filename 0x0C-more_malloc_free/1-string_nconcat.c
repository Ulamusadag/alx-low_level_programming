#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - gdft
 * @s1: ngvjg
 * @s2: ukhjg
 * @n: yjgyg
 * Return: jhgj
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i, j;
	int s1_length, s2_length;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (s1_length = 0; s1_length != '\0'; s1_length++)
		;
	for (s2_length = 0; s2_length != '\0'; s2_length++)
		;
	str = malloc(s1_length + n + 1);

	if (str == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		str[i] = s1[i];
	for (j = 0; j < n; j++)
	{
		str[i] = s2[j];
		i++;
	}
	str[i] = '\0';
	return (str);
}
