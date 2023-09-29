#include "main.h"
#include <string.h>

/**
 * binary_to_uint - ggfmm
 * @b: vj,vh
 * Return: jkhk
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int length = strlen(b);
	int i;
	unsigned int count = 1;
	unsigned int mul = 0;

	if (!b)
		return (0);
	for (i = length - 1; i >= 0; i--)
	{
		if (b[i] != 1 && b[i] != 0)
		{
			return (0);

		}
		mul += (b[i] - '0') * count;
		count *= 2;
	}
	return (mul);

}
