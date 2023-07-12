#include "lists.h"
/**
 * free_list - frees the list
 * Description: free the list_t
 * @head: pointer to head
 * Return: void
 */
void free_list(list_t *head)
{
list_t *temp = head;
list_t *foll;

while (temp)
{
	foll = temp->next;
	free(temp);
	temp = foll;
}
head = NULL;
}
