#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - hjggf
*/

void print_alphabet_x10(void)
{
	for (int i = 0; i < 10; i++)
	{
		char ch = 'a';

		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
	}
	_putchar('\n');
}

