#include <stdio.h>

/**
 * main - End point
 *
 * Description: gjfdhd
 *
 * Return: 0 (success)
*/

int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		putchar(digit + '0');
		putchar(',');
		putchar('\t');
		digit++;
	}
	putchar('\n');
	return (0);

}
