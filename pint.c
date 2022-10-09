#include "monty.h"
/**
 * pint - Print the top element of the stack
 * @stack: Double pointer to the top of the stack
 * @n_line: The line of the file the command was found
 */
void pint(stack_t **stack, unsigned int n_line)
{
	if (*stack == NULL)
	{
		printf("L%u: can't pint, stack empty\n", n_line);
		rq.opcode = 1;
	}
	if (rq.opcode != 1)
		printf("%d\n", (*stack)->n);
}
