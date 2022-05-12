#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - Initialize a variable of type struct dog.
 * @d: Variable to initialize.
 * @name: Pet's name.
 * @age: Pet's age.
 * @owner: Pet's owner.
 **/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
