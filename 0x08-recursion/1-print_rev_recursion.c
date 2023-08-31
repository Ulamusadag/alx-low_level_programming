#include <stdio.h>
#include "main.h"

/**
*_print_rev_recursion - ghvgcjh
*@s: jh,hgh
*Return: hbgh
*/

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
