#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees dogs created
 * @d: pointer to dogs created
 *
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		return;
	}
	free((*d).name);
	free((*d).owner);
	free(d);
}
