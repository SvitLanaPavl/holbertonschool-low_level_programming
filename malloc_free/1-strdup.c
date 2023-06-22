#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns pointer to a newly allocated space in memory
 * Description: returns a pointer to a newly allocated space in
 * memory which contains a copy of the string given as a parameter
 * @str: string argument
 * Return: pointer to the duplicated string, NULL if insufficient memory
 * available
 */
char *_strdup(char *str)
{
	size_t length = strlen(str) + 1;
	char *new_str;
	unsigned int i;

	if (str == NULL)
	return (NULL);

	new_str = malloc(sizeof(char) * length);
	if (new_str == 0)
	return (NULL);

	for (i = 0; i < length; i++)
	{
	new_str[i] = str[i];
	}
	return (new_str);
}
