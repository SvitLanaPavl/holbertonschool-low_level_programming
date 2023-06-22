#include "main.h"
/**
 * str_concat - concatenates two strings
 * Description: concatenates two strings
 * @s1: string 1 argument
 * @s2: string 2 argument
 * Return: pointer to the newly allocated space in memory,
 * which contains the contents of s1 followed by the contents
 * of s2 and NULL terminated. NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	size_t len1, len2, new_len;
	char *new_s;

	if (s1 == NULL)
	s1 = "";

	if (s2 == NULL)
	s2 = "";

	len1 = strlen(s1);
	len2 = strlen(s2);
	new_len = len1 + len2 + 1;
	new_s = malloc(new_len);

	if (new_s == NULL)
	return (NULL);

	memcpy(new_s, s1, len1);
	memcpy(new_s + len1, s2, len2);
	new_s[new_len - 1] = '\0';
	return (new_s);
}
