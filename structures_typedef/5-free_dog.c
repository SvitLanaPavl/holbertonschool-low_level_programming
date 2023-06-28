#include "dog.h"
/**
 * free_dog - free dog
 * Description: frees dogs
 * @d: pointer to the dog_t structure
 * Return: void
 */
void free_dog(dog_t *d)
{
free(d->name);
free(d->age);
free(d->owner);
free(d);
}
