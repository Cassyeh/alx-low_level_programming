#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new struct dog
 * @name: string
 * @age: float number
 * @owner: string
 *
 * Return: pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog;

	newdog = malloc(sizeof(dog_t));
	if (newdog == NULL)
	{
		return (NULL);
	}
	(*newdog).name = name;
	(*newdog).owner = owner;
	(*newdog).age = age;
	return (newdog);
}
