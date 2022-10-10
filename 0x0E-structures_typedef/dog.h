#ifndef _DOG_H
#define _DOG_H
#include<stdio.h>
#include<stdlib.h>


/**
 * struct dog - info on dog.
 * @name: dog's name.
 * @age: age of the dog in float.
 * @owner: name of the owner of the dog.
 *
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
typedef struct dog my_dog;
my_dog *new_dog(char *name, float age, char *owner);
void free_dog(my_dog *d);


#endif
