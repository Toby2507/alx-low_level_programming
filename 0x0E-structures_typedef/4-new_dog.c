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
	char *tmpname, *tmpowner;

	d = malloc(sizeof(dog_t));
	if (!d)
		return (NULL);
	tmpname = strdup(name);
	if (!tmpname)
	{
		free(d);
		return (NULL);
	}
	d->name = tmpname;
	tmpowner = strdup(owner);
	if (!tmpowner)
	{
		free(tmpname);
		free(d);
		return (NULL);
	}
	d->owner = tmpowner;
	d->age = age;
	return (d);
}
