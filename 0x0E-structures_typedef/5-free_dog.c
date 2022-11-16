#include "dog.h"
#include <stdlib.h>

 /**
  * free_dog-frees dogs.
  * @d: the dog to be freed

  */

void free_dog(dog_t *d)
{
	if(d == NULL)
		return;

	free(d->owner = owner);
	free(d->name = name);
	free(d);
}
