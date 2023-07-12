#include "lists.h"
/**
 * print_list - prints all the elements of the structure
 * Description: prints all the elements of the structure
 * @h: pointer to head
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
const list_t *temp = h;
size_t count = 0;

while (temp)
{
if (!temp->str)
{
printf("[0] (nil)\n");
}
printf("[%d] %s\n", temp->len, temp->str);
count++;
temp = temp->next;
}
return (count);
}
