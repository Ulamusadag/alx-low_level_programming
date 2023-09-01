#include <stdio.h>
#include "main.h"

/**
 * _puts - dfe
 * @str: gfg
 * Return: 0
*/

void _puts(char *str)
{
	int i;

	for (i = 0; *str != '\0'; str++)
	{
		_putchar(*str + 0);
		i++;
	}
	_putchar('\n');
}
