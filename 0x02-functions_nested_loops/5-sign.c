#include <stdio.h>
#include "main.h"

/**
 * int - param
 *
 * print_sign - kfgmffm
 *
 * @n - param
 *
 *
 *
 * Return: return 0 or -1 or +1
*/

int print_sign(int n)
{
	if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	if (n > 0)
	{
		_putchar(43);
		return  (1);
	}
	if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
}

