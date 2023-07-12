#include "lists.h"
/**
 * add_node_end - adds a node at the beginning of a list
 * Description: adds a node at the beginning of the list
 * @head: pointer to head
 * @str: string pointer
 * Return: address of the new element or NULL it it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *newNode = malloc(sizeof(list_t));
list_t *temp = *head;

if (!newNode)
return (NULL);

newNode->str = strdup(str);
if (!newNode->str)
{
	free(newNode);
	return (NULL);
}
newNode->len = strlen(str);
newNode->next = NULL;

if (!*head)
*head = newNode;

while (temp->next)
temp = temp->next;

temp->next = newNode;
free(temp);
return (newNode);
}
