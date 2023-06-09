#include "main.h"
/**
 * rot13 - Encodes a string using rot 13
 * Description: encodes a string using rot 13
 * @str: string argument
 * Return: encoded string
 */
char *rot13(char *str)
{
char *alphabet = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
int len = strlen(str);
int i;

for (i = 0; i < len; i++)
{
char c = str[i];
int index = strchr(alphabet, c) - alphabet;

if (index != -1)
{
str[i] = alphabet[(index + 13) % 26];
}
str[i] = c;
}
return (str);
}
