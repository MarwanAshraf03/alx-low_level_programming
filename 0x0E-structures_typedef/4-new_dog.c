#include "dog.h"
#include <stdlib.h>

/**
 * _strdup - duplicates a string
 * @str: the string to duplicate
 *
 * Return: pointer to the duplicated string
 */
char *_strdup(char *str)
{
	int length = 0;
	char *ret;

	if (str == NULL)
		return (NULL);
	while (*str++)
		length++;
	ret = malloc(sizeof(char) * (length + 1));
	if (!ret)
		return (NULL);
	for (length++; length--;)
		ret[length] = *--str;
	return (ret);
}


/**
 * new_dog - instantiates a new dog
 * @name: the dog name
 * @age: the dog age
 * @owner: the dog owner
 *
 * Return: pointer to the new dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog = malloc(sizeof(dog_t));

	if (!dog)
		return (NULL);
	dog->name = _strdup(name);
	if (name && !dog->name)
		return (free(dog), NULL);
	dog->owner = _strdup(owner);
	if (owner && !dog->owner)
		return (free(dog->name), free(dog), NULL);
	dog->age = age;
	return (dog);
}
