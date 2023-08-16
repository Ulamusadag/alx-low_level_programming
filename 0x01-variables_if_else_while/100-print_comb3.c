#include <stdio.h>

/**
 * main - End point
 *
 * Descreiption: dfgdhdtrj
 *
 * Return: 0 (success)
*/

int maini(void)
{
	int digit1 = 0, digit2;

	while(digit <= 9)
	{
		digit = 0;
		while (digit <= 9)
		{
			if (digit1 != digit2 && digit1 < digit2)
			{
				putchar(digit1 + 48);
				putchar(digit2 + 48);
				if (digit1 + digit2 != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
			digit2++;
		}
		digit++;
          }
	putchar('\n');
	return (0);

}
