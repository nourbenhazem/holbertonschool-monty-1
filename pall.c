#include "monty.h"

/**
* _pall - Prints all the values on the stack\
*		starting from the top of the stack
*
* @stack: Double pointer to the top of the stack
* @line_number: The line number where the pall opcode is located
* Return: void
*/
void _pall(stack_t **stack, unsigned int line_number)
{
	(void)line_number;
	stack_t *node;

	node = *stack;
	while (node)
	{
		printf("%d\n", node->n);
		node = node->next;
	}
}
