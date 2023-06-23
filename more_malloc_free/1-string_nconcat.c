#include "main.h"
/**
 * string_nconcat - concatenates two strings
 * Description: concatenates two strings
 * @s1: string 1 argument
 * @s2: string 2 argument
 * @n: the first n bytes of s2
 * Return: pointer to the newly allocated space in memory,
 * which contains the contents of s1 followed by the contents
 * of s2 and NULL terminated. NULL on failure, if n is greater
 * or equal to the length of s2, return the entire s2
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	size_t length;
	char *n_s;

	if (s1 == NULL)
	s1 = "";

	if (s2 == NULL)
	s2 = "";

	length = strlen(s1) + n;
	n_s = malloc(length + 1);

	if (n_s == NULL)
	return (NULL);

	strcpy(n_s, s1);
	strncat(n_s, s2, n);

	return (n_s);
}
