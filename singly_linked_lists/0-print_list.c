#include "lists.h"
/**
 * print_list - prints all the elements of the structure
 * Description: prints all the elements of the structure
 * @h: pointer to structure
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
const list_t *temp = h;
size_t count;

if (!temp->str)
printf("[0] (nul)\n");

while (temp)
{
printf("[%d] %s", count, temp->str);
temp = temp->next;
count++;
}
return (count); 
}
