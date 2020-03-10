#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - create new dog
 *
 * @name: name of new dog.
 * @age: age of new dog.
 * @owner: owner of new dog.
 *
 * Return: pointer to new_dog.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *new_name;
	char *new_owner;
	int size_of_name_p1 = 0, size_of_owner_p1 = 0, i;

	if (name == NULL || owner == NULL)
		return (NULL);
	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);
	while (name[size_of_name_p1] != '\0')
		size_of_name_p1++;
	size_of_name_p1++;
	new_name = malloc(size_of_name_p1);
	if (new_name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	for (i = 0; i < size_of_name_p1 - 1; i++)
		new_name[i] = name[i];
	new_name[i] = '\0';
	while (owner[size_of_owner_p1] != '\0')
		size_of_owner_p1++;
	size_of_owner_p1++;
	new_owner = malloc(size_of_owner_p1);
	if (new_owner == NULL)
	{
		free(new_dog);
		free(new_name);
		return (NULL);
	}
	for (i = 0; i < size_of_owner_p1 - 1; i++)
		new_owner[i] = owner[i];
	new_owner[i] = '\0';
	new_dog->name = new_name;
	new_dog->age = age;
	new_dog->owner = new_owner;
	return (new_dog);
}
