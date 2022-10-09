#include "monty.h"



/**
 * pall - Print all values in the stack
 * @stack: Double pointer to the top of the stack
 * @n_line: The line of the file the command was found
 */
void pall(stack_t **stack, unsigned int n_line)
{
	stack_t *tmp;
	(void) n_line;

	tmp = *stack;
	while (tmp != NULL)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
	}
}


