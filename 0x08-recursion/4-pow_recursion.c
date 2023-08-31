#include <stdio.h>
#include "main.h"

/**
 * _pow_recursion - jggj
 * @x: ngvgh
 * @y: gff
 * Return: ghfgh
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(int x, y - 1));
}
