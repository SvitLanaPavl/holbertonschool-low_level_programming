#include "main.h"
/**
 * rot13 - Encodes a string using rot 13
 * Description: encodes a string using rot 13
 * @str: string argument
 * Return: encoded string
 */
char *rot13(char *str)
{
char *alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
char *rot[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
int i, j;

for (i = 0; str[i] != '\0'; i++)
{
for (j = 0; alphabet[j] != '\0'; j++)
{
if (str[i] == alphabet[j])
{
str[i] = rot[j];
break;
}
}
}
return (str);
}
