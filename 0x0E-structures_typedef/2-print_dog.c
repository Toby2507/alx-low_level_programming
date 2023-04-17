#include "dog.h"

/**
 * print_dog - prints a struct dog
 * @d: dog to be printed
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		d->name = d->name ? d->name : "(nil)";
		d->age = d->age ? d->age : 0;
		d->owner = d->owner ? d->owner : "(nil)";
		printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
	}
}
