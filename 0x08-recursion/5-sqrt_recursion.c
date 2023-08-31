#include <stdio.h>
#include "main.h"

/**
 * _sqrt_recursion - fgdfgdf
 * @n: fgfg
 * @val:gyyt
 * Return: hghfg
*/
int sqrt_r(nt n, int val);
int _sqrt_recursion(int n)
{
	return (sqrt_r(n, 1));

}

/**
 * sqrt_r - jjhgh
 * @n: nhgvh
 * @val: hbjhb
 * Return: gjf
*/

int sqrt_r(int n, int val)
{
	if (val * val == n)
		return (val);
	else if (val * val < n)
		return (sqrt_r(n, val + 1));
	else
		return (-1);
}
