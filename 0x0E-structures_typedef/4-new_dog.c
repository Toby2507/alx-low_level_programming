#include "dog.h"
#include <string.h>

/**
 * new_dog - creates a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Return: pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(dog_t));
	if (!d)
		return (NULL);
	d->name = name ? strdup(name) : NULL;
	d->age = age;
	d->owner = owner ? strdup(owner) : NULL;
	return (d);
}
