#include "main.h"
/**
 * _strspn - Gets the length of a prefix substring
 * Description: gets the length of a prefix substring
 * @s: string to be searched
 * @accept: pointer to the string of characters to be found
 * Return: the number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, k, counter = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (counter != i)
			break;
		for (k = 0; accept[k] != '\0'; k++)
		{
			if (s[i] == accept[k])
			counter++;;
		}
	}
return (counter);
}
