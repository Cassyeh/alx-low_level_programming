#ifndef DOG_H
#define DOG_H

/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;

/**
 * struct dog - info for a dog
 * @name: dog's name in string
 * @age: dog's age
 * @owner: dog's owner name in string
 *
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif
