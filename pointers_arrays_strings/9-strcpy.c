#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strcpy - Prints the string
 * Description: Copies the string pointed to by src,
 * including the terminating null byte, to the buffer
 * pointed to by dest
 * @dest: destination argument
 * @src: source argument
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
int counter;

for (counter = 0; src[counter] != '\0'; counter++)
{
	dest[counter] = src[counter];
}
dest[counter] = '\0';
return (*dest);
}
