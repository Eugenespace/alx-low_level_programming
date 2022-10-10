#include<stdlib.h>
#include "dog.h"
#include<stdio.h>

/**
 * init_dog- structure of dog object
 * @name:name of dog
 * @owner: owner of dog
 * @age: age of dog
 * @d:pointer to the dog object in memory
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
