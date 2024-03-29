1-dlistint_len.c

/**
 * dlistint_len - function that returns the number of elements in a linked list
 * @h: head pointer of a doubly linked list.
 * @h: head pointer of a doubly linked list.
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t num_nodes = 0;

	while (h)
	{
		num_nodes++;
		h = h->next;
	}
	return (num_nodes);
}
