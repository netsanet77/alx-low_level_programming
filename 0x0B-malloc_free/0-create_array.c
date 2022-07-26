#include "main.h"
#include <stdlib.h>
char *create_array(unsigned int size, char c)
{
unsigned int i;
char *p;
if (size == 0)
return (NULL);
p = malloc(size * sizeof(char));
for (i = 0; i < size; i++)
{
p[i] = c;
}
return (p);
}
