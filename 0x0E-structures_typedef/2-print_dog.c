#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * print_dog - print a struct dog
 * @d: pointer to access the element of structure
 *
 * Return: nonthing
 */
void print_dog(struct dog *d)
{
char *null = "(nil)";
if (d == NULL)
	printf(" \n");
if (d->name == NULL)
	printf("Name: %s\n", null);
else
	printf("Name: %s\n", d->name);
if (d->age == 0)
	printf("Age: %s\n", null);
else
	printf("Age: %.6f\n", d->age);
if (d->owner == NULL)
	printf("Owner: %s\n", null);
else
	printf("Owner: %s\n", d->owner);
}
