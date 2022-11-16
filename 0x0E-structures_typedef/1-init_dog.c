#include <stdio.h>
#include "dog.h"
/**
 * init_dog- function that initializes a variable struct
 * @d: struct variable
 * @name: name of dog
 * @age: dogs age
 * @owner: the name of the owner of the dog

 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
