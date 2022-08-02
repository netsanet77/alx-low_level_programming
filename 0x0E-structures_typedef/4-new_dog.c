#include "dog.h"
#include <string.h>
#include <stdlib.h>
/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owneir of the dog
 *
 * Return: null when the function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *ndog;
int len_name, len_owner;
if (name != NULL && owner != NULL)
{
len_name = strlen(name);
len_owner = strlen(owner);
ndog = malloc(sizeof(dog_t));
if (!ndog)
	return (NULL);
ndog->name = malloc((len_name + 1) * sizeof(char));
if (!ndog->name)
{
	free(ndog);
	return (NULL);
}
ndog->owner = malloc((len_owner + 1) * sizeof(char));
if (!ndog->owner)
{
	free(ndog->name);
	free(ndog);
	return (NULL);
}
strcpy(ndog->name, name);
strcpy(ndog->owner, owner);
ndog->age = age;
}
return (ndog);
}
