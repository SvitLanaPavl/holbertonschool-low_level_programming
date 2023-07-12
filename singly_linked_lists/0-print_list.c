#include "lists.h"
/**
 * print_list - prints all the elements of the structure
 * Description: prints all the elements of the structure
 * @h: pointer to head
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
size_t count = 0;

while (h)
{
if (h->str == NULL)
{
printf("[0] (nil)\n");
}
printf("[%d] %s\n", h->len, h->str);
count++;
h = h->next;
}
return (count);
}
