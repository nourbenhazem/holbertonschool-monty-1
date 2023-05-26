#include "monty.h"

/**
* _push - Pushes a new element onto the top of the stack
* @stack: Double pointer to the top of the stack
* @line_number: The line number where the push opcode is located
*
* Return: void
*/
void _push(stack_t **stack, unsigned int line_number)
{
	char *arg = NULL;

	arg = strtok(NULL, " \n\r\t");
	if (arg == NULL || !is_all_digits(arg))
	{
		fprintf(stderr, "L%u: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}
	else
	{
		stack_t *node = malloc(sizeof(stack_t));

		if (!node)
		{
			fprintf(stderr, "Error: malloc failed\n");
			exit(EXIT_FAILURE);
		}
		node->n = atoi(arg);
		node->next = (*stack);
		node->prev = NULL;
		if (*stack)
		{
			(*stack)->prev = node;
		}
		*stack = node;
	}
}
