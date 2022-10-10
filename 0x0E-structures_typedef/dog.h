#ifndef _DOG_H
#define _DOG_H
#include<stdio.h>
#include<stdlib.h>

/**
 *struct dog- structure of dog object
 *@name: name of dog
 *@owner: owner of dog
 *@age: age of dog
 *Return: my_dog
 */

struct dog
{
	char *name;
	char *owner;
	float age;
};

struct dog *my_dog(char *name, char *owner, float age)
{
	struct dog  *my_dog;

	my_dog = malloc(sizeof(struct dog));
	printf("%lu\n", sizeof(struct dog));
	if (my_dog == NULL)
		return (NULL);
	my_dog->name = name;
	my_dog->owner = owner;
	my_dog->age = age;

	return (my_dog);
	free(my_dog);
}










#endif
