#include "lists.h"
/**
 * free_list - frees the list
 * Description: free the list_t
 * @head: pointer to head
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *tmp = head;

	while (tmp)
{
	list_t tmp1 = tmp;
	tmp = tmp->next;
	free(tmp1);
}
}
