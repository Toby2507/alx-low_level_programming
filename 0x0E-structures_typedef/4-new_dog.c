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
	dog_t *d = malloc(sizeof(dog_t));

	if (!d)
		return (NULL);
	if (name)
		d->name = strdup(name);
	if (age)
		d->age = age;
	if (owner)
		d->owner = strdup(owner);
	return (d);
}
