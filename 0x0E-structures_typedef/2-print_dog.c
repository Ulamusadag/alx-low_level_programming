#include "dog.h"
#include <stdio.h>

/**
 * print_dog - hjj
 * @d: jkjh
 * Return: jhh
*/

void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: %s\n", d->name ? d->name : "(nill)");
		printf("Age: %f\n", d->age ? d-age : "(nill)");
		printf("Owner: %s\n", d->owner ? d->owner : "(nill)");
	}

}
