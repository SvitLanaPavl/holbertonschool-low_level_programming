#include "lists.h"
/**
 * free_list - frees the list
 * Description: free the list_t
 * @head: pointer to head
 * Return: void
 */
void free_list(list_t *head)
{
list_t *current;

while (head)
{
	current = head;
	head = head->next;
	free(current);
}
}
