#include "lists.h"
/**
 * list_len - returns the number of elements
 * Description: returns the number of elements in a linked list
 * @h: pointer to head
 * Return: the number of elements
 */
size_t list_len(const list_t *h)
{
size_t count = 0;
const list_len *temp = h;

while (temp)
{
count++;
temp->next;
}
return (count);
}
