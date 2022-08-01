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
if (d != NULL)
{
if (d->name == NULL)
	printf("Name: %s\n", null);
else
	printf("Name: %s\n", d->name);
if (d->age)
	printf("Age: %.6f\n", d->age);
else
	printf("Age: %f\n", 0.0);
if (d->owner == NULL)
	printf("Owner: %s\n", null);
else
	printf("Owner: %s\n", d->owner);
}
}
