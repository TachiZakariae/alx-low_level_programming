
/**
 * free_dlistint - free a dlist
 * @head: pointer to current head node
 *
 * Return:
 * void
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *node;

	while (head)
	{
		node = head;
		head = head->next;
		free(node);
	}
}
