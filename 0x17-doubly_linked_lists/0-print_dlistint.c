#ifndef LISTS_H
#define LISTS_H


#include <stdio.h>
#include <stdlib.h>
/**
 * print_dlistint - prints double-linked list
 * @h: address of head node
 *
 * Return: size of list
*/
size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}