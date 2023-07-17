#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - Initializes the variable type struct dog.
 * @d: is the  Variable to  be initialized.
 * @name:  name.of the dog
 * @age: ageof the dog.
 * @owne: owner of the dog.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
