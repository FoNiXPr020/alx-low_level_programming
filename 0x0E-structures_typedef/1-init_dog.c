#include "dog.h"

/**
 * init_dog - Initialize a variable of type struct dog.
 * @d: Pointer to struct type dog
 * @name: Pointer to char name's dog
 * @age: age's dog
 * @owner: pointer to char owner's dog
 * Return: No.
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

