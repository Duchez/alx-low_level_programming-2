#include "lists.h"

/**
 * add_node_end - adds a new node at the end a list_t list
 * @head: reference to head of linked list
 * @str: string to be added on new node
 * Return: address of new head;
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *s = strdup(str);
	int len  = strlen(str);
	list_t *_head = *head;
	list_t *node = malloc(sizeof(list_t));

	if (!node)
		return (NULL);

	node->str = s;
	node->len = len;
	node->next = NULL;

	if (!*head)
		*head = node;
	else
	{
		while (_head->next)
			_head = _head->next;
		_head->next = node;
	}
	return (node);
}
