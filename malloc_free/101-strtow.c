#include "main.h"
/**
 * strtow - splits a string into words
 * Description: splits a string into words
 * @str: string argument
 * Return: pointer to an array of strings
 */
char **strtow(char *str)
{
char **word = NULL;
char *token = NULL;
int i = 0;

if (str == NULL || str[0] == '\0')
	return (NULL);

token = strtok(str, " ");
while (token != NULL)
{
	word = realloc(word, sizeof(char *) * (i + 1));
	word[i] = token;
	i++;
	token = strtok(NULL, " ");
}

word[i] = NULL;
return (word);
}
