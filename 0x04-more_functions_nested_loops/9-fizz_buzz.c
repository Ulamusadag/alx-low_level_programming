#include <stdio.h>
#include "main.h"

/**
 * fizz_buzz - fndn
 * Return: 0
*/

void fizz_buzz(void)
{
	int num = 1, i;

	for (i = 0; i <= 99; i++)
	{
		if (num / 3 == 0)
		{
			_putchar('Fizz');
		}
		else if (num / 5 == 0)
		{
			_putchar('Buzz');
		}
		_putchar(num + 48);
		_putchar(' ');
	}
	return (0);
}
