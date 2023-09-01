#include <stdio.h>
#include "main.h"

/**
 *_strlen - ftdy
 * @s: utfjf
 * Return: 0
*/

int _strlen(char *s)
{
	int count;

	for (count = 0; *s != '\0'; s++)
	{
		++count;
	}
	return (count);
}
