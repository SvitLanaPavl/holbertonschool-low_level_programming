#include "dog.h"
/**
 * print_dog - print
 * Description: initializes a variable of type struct dog
 * @d: pointer to the dog structure
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	return;

	printf("Name: %s\n", d->name ? d->name : "(nil)");
	printf("Age: %2f\n", d->age ? d->age : 0);
	printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
}
