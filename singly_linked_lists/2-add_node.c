#include "lists.h"
/**
 * add_node - adds a node at the beginning of a list
 * Description: adds a node at the beginning of the list
 * @head: pointer to head
 * @str: string pointer
 * Return: address of the new element or NULL it it failed
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *newNode = malloc(sizeof(list_t));
if (!newNode)
return (NULL);

newNode->str = strdup(str);
if (!newNode->str)
{
	free(newNode);
	return (NULL);
}
newNode->len = strlen(str);
newNode->next = (*head);
(*head) = newNode;
return (newNode);
}
