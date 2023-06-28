#include "dog.h"
/**
 * new_dog - new struct
 * Description: creates a copy of the old dog
 * @name: name
 * @age: age
 * @owner: owner
 * Return: new_dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *new_dog = malloc(sizeof(dog_t));

if (new_dog == NULL)
return (NULL);

new_dog->name = strdup(name);
new_dog->owner = strdup(owner);
new_dog->age = age;

return (new_dog);
free(new_dog);
}
