#include <stdio.h>
#include "main.h"
#include <stdio.h>

/**
 * print_array - fgffj
 * @a: fhgf
 * @n: hfnhf
 * Return: 0
*/

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i <= n - 1; i++)
	{
		if (i != (n - 1))
		{
			printf("%d, ", a[i]);
		}
		else
		{
			printf("%d", a[i]);
		}
	}
	_putchar('\n');
}
