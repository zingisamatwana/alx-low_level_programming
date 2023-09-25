#ifndef DOG_TYPEDEF_H
#define DOG_TYPEDEF_H

/**
 * struct dog - Defines a dog structure.
 * @name: Pointer to a character string for the dog's name.
 * @age: The age of the dog as a float.
 * @owner: Pointer to a character string for the owner's name.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - Typedef for struct dog.
 */
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* DOG_TYPEDEF_H */
