#include "lists.h"
#include <stdlib.h>
/**
 * delete_dnodeint_at_index - Supprime le nœud à un
 * index donné dans une liste doublement chaînée.
 * @head: Pointeur vers le pointeur de tête de la liste.
 * @index: Index du nœud à supprimer.
 * 
 * Return: 1 si réussi, -1 si échoue.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = current->next;
		if (current->next != NULL)
			current->next->prev = NULL;
		free(current);
		return (1);
	}

	while (current != NULL && i < index)
	{
		current = current->next;
		i++;
	}

	if (current == NULL)
		return (-1);

	if (current->next != NULL)
		current->next->prev = current->prev;
	if (current->prev != NULL)
		current->prev->next = current->next;

	free(current);
	return (1);
}