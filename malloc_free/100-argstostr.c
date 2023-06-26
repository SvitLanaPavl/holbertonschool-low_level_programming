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
int i, j, length = 0;

if (ac == 0 || av == NULL)
return (NULL);

for (i = 0; i < ac; i++)
{
	for (j = 0; av[j] != '\0'; j++)
	{
	length++;
	}
}
new_str = malloc((length + ac + 1) * sizeof(char));
for (i = 0, length = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++, length++)
new_str[length] = av[i][j];
new_str[length] = '\n';
length++;
}
if (new_str == NULL)
return (NULL);

return (new_str);
free(new_str);
}
