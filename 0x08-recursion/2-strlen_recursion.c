#include <stdio.h>
#include "main.h"

/**
 * _strlen_recursion - gg,hj
 * @s: hbbj
 * Return: jhjhh
*/

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
