#include "dog.h"

/**
 * print_dog - prints a struct dog
 * @d: dog to be printed
 */
void print_dog(struct dog *d)
{
	if (!d)
		puts("nil");
	else
		printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
