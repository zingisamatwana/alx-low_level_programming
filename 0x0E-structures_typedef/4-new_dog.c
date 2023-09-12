#include "dog_typedef.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - Creates a new dog with copied name and owner.
 * @name: Pointer to a character string for the dog's name.
 * @age: The age of the dog as a float.
 * @owner: Pointer to a character string for the owner's name.
 * Return: Pointer to the new dog_t, or NULL if it fails.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog_ptr;

	/* Allocate memory for the new dog */
	new_dog_ptr = malloc(sizeof(dog_t));
	if (new_dog_ptr == NULL)
		return (NULL);

	/* Allocate memory and copy the name */
	new_dog_ptr->name = strdup(name);
	if (new_dog_ptr->name == NULL)
	{
		free(new_dog_ptr);
		return (NULL);
	}

	/* Allocate memory and copy the owner */
	new_dog_ptr->owner = strdup(owner);
	if (new_dog_ptr->owner == NULL)
	{
		free(new_dog_ptr->name);
		free(new_dog_ptr);
		return (NULL);
	}

	new_dog_ptr->age = age;
	return (new_dog_ptr);
}
#include "dog_typedef.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - Creates a new dog with copied name and owner.
 * @name: Pointer to a character string for the dog's name.
 * @age: The age of the dog as a float.
 * @owner: Pointer to a character string for the owner's name.
 * Return: Pointer to the new dog_t, or NULL if it fails.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog_ptr;

	/* Allocate memory for the new dog */
	new_dog_ptr = malloc(sizeof(dog_t));
	if (new_dog_ptr == NULL)
		return (NULL);

	/* Allocate memory and copy the name */
	new_dog_ptr->name = strdup(name);
	if (new_dog_ptr->name == NULL)
	{
		free(new_dog_ptr);
		return (NULL);
	}

	/* Allocate memory and copy the owner */
	new_dog_ptr->owner = strdup(owner);
	if (new_dog_ptr->owner == NULL)
	{
		free(new_dog_ptr->name);
		free(new_dog_ptr);
		return (NULL);
	}

	new_dog_ptr->age = age;
	return (new_dog_ptr);
}
#include "dog_typedef.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - Creates a new dog with copied name and owner.
 * @name: Pointer to a character string for the dog's name.
 * @age: The age of the dog as a float.
 * @owner: Pointer to a character string for the owner's name.
 * Return: Pointer to the new dog_t, or NULL if it fails.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog_ptr;

	/* Allocate memory for the new dog */
	new_dog_ptr = malloc(sizeof(dog_t));
	if (new_dog_ptr == NULL)
		return (NULL);

	/* Allocate memory and copy the name */
	new_dog_ptr->name = strdup(name);
	if (new_dog_ptr->name == NULL)
	{
		free(new_dog_ptr);
		return (NULL);
	}

	/* Allocate memory and copy the owner */
	new_dog_ptr->owner = strdup(owner);
	if (new_dog_ptr->owner == NULL)
	{
		free(new_dog_ptr->name);
		free(new_dog_ptr);
		return (NULL);
	}

	new_dog_ptr->age = age;
	return (new_dog_ptr);
}
