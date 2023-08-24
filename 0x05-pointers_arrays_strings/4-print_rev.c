#include <stdio.h>
#include "main.h"

/**
 * print_rev - hj,,jg
 * @s: gfm
 * Return: 0
*/

void print_rev(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s + '\0' - 1);
		s--;
	}
	_putchar('\n');
}
