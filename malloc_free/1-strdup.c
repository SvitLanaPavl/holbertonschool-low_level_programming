#include "main.h"
#define MAX_MEMORY 1024
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
	char *new_str = malloc(length);

	if (length > MAX_MEMORY)
	return (NULL);

	if (new_str == NULL)
	return (NULL);

	memcpy(new_str, str, length);
	return (new_str);
}
