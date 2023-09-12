#include "dog_struct.h"
#include <stdio.h>

/**
 * init_dog - Initializes a struct dog with the provided values.
 * @d: Pointer to the struct dog to initialize.
 * @name: Pointer to a character string for the dog's name.
 * @age: The age of the dog as a float.
 * @owner: Pointer to a character string for the owner's name.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
