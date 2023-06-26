#include "main.h"
/**
 * argstostr - concatenates all the args of the program
 * Description: concatenates all the args of the program
 * @ac: argument count
 * @av: argument vactor
 * Return: pointer to a new string, NULL if fails
 */
char *argstostr(int ac, char **av)
{
char *new_str;
int i, length = 1;

if (ac == 0 || av == NULL)
return (NULL);

for (i = 1; i < ac; i++)
{
length += strlen(av[i]);
}
new_str = malloc(length * sizeof(char));

for (i = 1; i < ac; i++)
{
strcat(new_str, av[i]);
}
if (new_str == NULL)
return (NULL);

return (new_str);
free(new_str);
}
