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
	int i, j, lenofname, lenofowner;

	newdog = malloc(sizeof(dog_t));
	if (newdog == NULL)
		return (NULL);
	lenofname = 0;
	while (name[lenofname] != '\0')
		lenofname++;
	lenofowner = 0;
	while (owner[lenofowner] != '\0')
		lenofowner++;
	(*newdog).name = malloc(sizeof(char) * (1 + lenofname));
	if ((*newdog).name == NULL)
	{
		free(newdog);
		return (NULL);
	}
	(*newdog).owner = malloc(sizeof(char) * (1 + lenofowner));
	if ((*newdog).owner == NULL)
	{
		free(newdog);
		free((*newdog).name);
		return (NULL);
	}
	for (i = 0; i < lenofname; i++)
		(*newdog).name[i] = name[i];
	(*newdog).name[i] = '\0';
	for (j = 0; j < lenofowner; j++)
		(*newdog).owner[j] = owner[j];
	(*newdog).owner[j] = '\0';
	(*newdog).age = age;
	return (newdog);
}
