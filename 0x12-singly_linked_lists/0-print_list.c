#include "lists.h"

size_t print_list(const list_t *h)
{


	register int len = 0;

	while (h)
	{
		(!h->str)
			? printf("[0] (nil)\n")
			: printf("[%i] %s\n", h->len, h->str);
		h = h->next;
		len++;
	}
	return (len);

}
