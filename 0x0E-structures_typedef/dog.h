#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>

typedef struct dog {
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *, char *, float, char *);
void print_dog(struct dog *);
dog_t *new_dog(char *, float, char *);
void free_dog(dog_t *);

#endif /* MAIN_H */
