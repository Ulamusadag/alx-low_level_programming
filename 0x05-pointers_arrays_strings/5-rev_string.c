#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * rev_string - chc
 * @s: gtu
 * Return: 0
*/

void rev_string(char *s)
{
	int len = strlen(s);
	int i;

	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
}
