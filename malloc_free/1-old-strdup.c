#include "main.h"
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

	if (str == NULL)
	return (NULL);

	new_str = malloc(length);
	if (new_str == NULL)
	return (NULL);

	memcpy(new_str, str, length);
	return (new_str);
}