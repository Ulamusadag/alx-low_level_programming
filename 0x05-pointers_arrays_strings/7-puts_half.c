#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 *puts_half - ghfgd
*@str: jhgf
*Return: 0
*/

void puts_half(char *str)
{
	int len = strlen(str);
	int i;

	if (len % 2 != 0)
	{
		for (i = len / 2 + 1; i <= len - 1; i++)
		{
			_putchar(str[i]);
		}
	}
	if (len % 2 == 0)
	{
		for (i = len / 2; i <= len - 1; i++)
		{
			_putchar(str[i]);
		}
	}

}
