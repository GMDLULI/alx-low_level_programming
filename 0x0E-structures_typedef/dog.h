#ifndef DOG_H
#define DOG_H

#include <stdio.h>

/**
 * struct dog- the name of the structure
 * @name: the name of th dog.
 * @age: the age of the dog.
 * @owner: the owner of the dog.
 * Return: the elements of the struct, which
 * indicate the information about a dog.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
#endif
