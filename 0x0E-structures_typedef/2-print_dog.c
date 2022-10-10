#include<stdlib.h>
#include"dog.h"
#include<stdio.h>

/**
 * print_dog- Prints dog
 * @d: dog pointer
 * Return: Always 0
 */




void print_dog(struct dog *d)
{
	if (!d)
		return;
	d->name ? printf("Name: %s\n", d->name) : printf("Name: (nil)\n");
	d->age >= 0 ? printf("Age: %f\n", d->age) : printf("Age: (nil)\n");
	d->owner ? printf("Owner: %s\n", d->owner) : printf("Owner: (nil)\n");
}

