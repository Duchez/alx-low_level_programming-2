#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: reference to head of linked list
 * @str: string to be added on new node
 * Return: address of new head;
 */
list_t *add_node(list_t **head, const char *str)
{
	char *s = strdup(str);
	int len  = strlen(str);

	list_t *node = malloc(sizeof(list_t));
	if (!node)
		return (NULL);
	node->str = s;
	node->len = len;
	node->next = *head;
	*head = node;
	return (*head);


}
