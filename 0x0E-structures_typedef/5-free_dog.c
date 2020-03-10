#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - free dinamic memory.
 *
 * @d: pointer to structure.
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		/*free(d->age);*/
		free(d->owner);
		free(d);
	}
}
