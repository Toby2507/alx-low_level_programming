#include "dog.h"

/**
 * init_dog - initializes a variable of type struct dog
 * @d: pointer to the variable
 * @name: name of dog
 * @age: dog's age
 * @owner: dog's owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		if (name)
			d->name = name;
		if (age)
			d->age = age;
		if (owner)
			d->owner = owner;
	}
}
