#include <stdio.h>
#include "main.h"

/**
 * jack_bauer - fgzze
 *
 * @n: param
 *
 * Return: 0
*/

void jack_bauer(void)
{
	init min, hr;

	for (hr = 0; hr <= 23; hr++)
	{
		for (min = 0; min <= 59 ; min++)
		{
			_putchart((hr / 10) + 48);
			_putchart((hr % 10) + 48);
			_putchart(':');
			_putchart((min / 10) + 48);
			_putchart((min % 10) + 48);

		}
	}
}
