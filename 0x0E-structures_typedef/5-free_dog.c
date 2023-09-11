#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - gfgh
 * @d: hbjh
 * Return: hgjh
*/

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
