#include <stdio.h>
#include "main.h"

/**
 * factorial - rdd
 * @n: hjhvjh
 * Return: jhg
*/

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
