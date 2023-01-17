#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initialize a variable of type struct dog
 * @d: pointer to struct
 * @name: dog name in string
 * @age: dog age in float
 * @owner: dog owner name in string
 *
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		return;
	}
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
