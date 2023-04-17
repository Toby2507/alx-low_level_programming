#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct dog - dog prototype
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Description: This struct creates a dog with it's name, age and owner details
 * recorded
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *, char *, float, char *);
void print_dog(struct dog *);
dog_t *new_dog(char *, float, char *);
void free_dog(dog_t *);

#endif /* MAIN_H */
