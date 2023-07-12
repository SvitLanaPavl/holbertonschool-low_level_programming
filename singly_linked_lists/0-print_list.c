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
int count, i = 0;

if (!temp->str)
printf("[0] (nul)\n");

while (temp)
{
if (!temp->str)
printf("[0] (nul)\n");

while (temp->str[i])
{
i++;
}
printf("[%d] %s\n", i, temp->str);
temp = temp->next;
count++;
}
return (count);
}
