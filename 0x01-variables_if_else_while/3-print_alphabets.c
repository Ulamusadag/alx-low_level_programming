#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print all alphabet in lower and upper
 *
 * Return: 0 (success)
*/

int main(void)
{
	char sm = 'a';
	char bg = 'A';

	while (sm <= 'z')
	{
		putchar(sm);
		sm++;

	}
	while (bg <= 'Z')
	{
		putchar(bg);
		bg++;
	}
	putchar('\n');

	return (0);
}
