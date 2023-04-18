#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog structure
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Dog's owner
 * Return: returns a pointer to newly created dog structure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *New_dog;

	New_dog = malloc(sizeof(dog_t));
	if (New_dog == NULL)
		return (NULL);

	New_dog->name = name;
	New_dog->age = age;
	New_dog->owner = owner;

	return (New_dog);
}
