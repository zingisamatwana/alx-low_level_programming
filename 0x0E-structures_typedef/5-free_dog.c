#include "dog_typedef.h"
#include <stdlib.h>

/**
 * free_dog - Frees the memory allocated for a dog_t structure.
 * @d: Pointer to the dog_t structure to free.
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		/* Free the dynamically allocated name and owner strings */
		free(d->name);
		free(d->owner);

		/* Free the memory for the dog structure itself */
		free(d);
	}
}
