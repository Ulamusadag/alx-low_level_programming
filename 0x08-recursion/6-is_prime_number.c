#include <stdio.h>
#include "main.h"

/**
 * is_prime_number - jhgh
 * @n: jkjkjjk
 * @val:gvhg
 * Return: jhgjjh
*/

int check_p(int n, int val);
int is_prime_number(int n)
{
	return (check_p(n, 2));

}

/**
 * check_p - mjnuih
 * @n: kjk
 * @val: jh
 * Return: ggh
*/

int check_p(int n, int val)
{
	if (val >= n && n > 1)
		return (1);
	else if (n % val == 0 || n <= 1)
		return (0);
	else
		return (check_p(n, val + 1));

}
