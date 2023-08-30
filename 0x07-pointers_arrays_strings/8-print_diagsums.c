#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - ghfd
 * @a: hbjh
 * @size: hkgjf
*/

void print_diagsums(int *a, int size)
{
	int i;
	unsigned int sum, sum1;

	for (i = 0; i < size; i++)
	{

		sum += a[i];
		sum1 += a[size - i - 1];
		a += size;
	}

	printf("%d, ", sum);
	printf("%d\n", sum1);
}
