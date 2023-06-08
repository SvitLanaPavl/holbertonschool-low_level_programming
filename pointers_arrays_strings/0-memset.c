#include "main.h"
/**
 * _memset - Fills memory with the constant byte
 * Description: fills the first n bytes of memory area
 * pointed to by s with the constant byte b
 * @s: starting address of memory to be filled
 * @b: value to be filled
 * @n: number of bytes to befilled starting from s to be filled
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	if (s == NULL || n <= 0)
		return (s);
	while (*s && n > 0)
	{
		*s = b;
		s++;
		n--;
	}
return (s);
}
