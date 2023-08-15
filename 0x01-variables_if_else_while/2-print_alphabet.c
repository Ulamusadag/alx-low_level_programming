#include <stdio.h>

/**
 * main - End point
 *
 * Description: print all alphabet
 *
 * Return: 0 (Success)
*/

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
