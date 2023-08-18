#include <stdio.h>
#include "main.h"

/**
*print_most_numbers - jkggyu
*Return: 0
*/

void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i == 2 || i == 4)
		{
			i++;
		}
		_putchar(i + 48);
	}
	_putchar('\n');
}
