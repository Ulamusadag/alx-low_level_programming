#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - hjh
 * @name: gvg
 * @f: hjhb
*/

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
