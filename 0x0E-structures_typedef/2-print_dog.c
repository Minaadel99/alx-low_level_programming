#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 * print_dog - init a variable 
 * @d: pointer to struct dog
 */
void print_dog(struct dog *d)
{
	if ( d == NULL)
		return;
	if (d->name = name == NULL)
		d->name = "(nil)";
	if (d->owner = owner == NULL)
		d->owner = "(nil)";
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
}
