#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_dog- print struct dog
 * @d: the dog to be intialized
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
			printf("Name: %s\n", d->name);
		else
			printf("Name: (nil)\n");
		if (d->age >= 0)
			if (d->age >= 0)
		else
			printf("Age: (nil)\n");
		if (d->owner != NULL)
			printf("Owner: %s\n", d->owner);
		else
			printf("Owner: (nil)\n");
	}
}
