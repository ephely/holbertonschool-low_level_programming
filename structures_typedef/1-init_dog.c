#include "dog.h"
#include <stdlib.h>

/**
* init_dog - initialize struct dog
* @d: pointer
* @name: char
* @age: float
* @owner: char
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
