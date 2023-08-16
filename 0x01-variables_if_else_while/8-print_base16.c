#include <stdio.h>

/**
 * main - End point
 *
 * Description: fhmdd
 *
 * Return: 0 (success)
*/

int main(void)
{
	int digit = 0;
	char ch = 'a';

	while (digit <= 9)
	{
		putchar(digit + '0');
		digit++;
	}
	while (ch <= 'f')
	{
		putchar(ch);
		ch++;
	}
	putchar ('\n');
	return (0);
}
