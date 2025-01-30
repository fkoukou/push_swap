/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakoukou <fakoukou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 08:55:43 by fakoukou          #+#    #+#             */
/*   Updated: 2025/01/30 15:10:54 by fakoukou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"
int	check_sorted(t_node *stack_a)
{
	t_node	*current;

	current = stack_a;
	while (current != NULL && current->next != NULL)
	{
		if ((current->value) > (current->next)->value)
			return (0);
		current = current->next;
	}
	return (1);
}

int	stack_size(t_node *stack_a)
{
	t_node	*node;
	int		i;

	node = stack_a;
	i = 0;
	while (node != NULL)
	{
		i++;
		node = node->next;
	}

	return (i);
}

int	get_index_pos(t_node **stack_a, int ic)
{
	int		i;
	t_node	*stack;

	stack = *stack_a;
	i = 0;
	while (i < stack_size(*stack_a))
	{
		if (stack->index < ic)
			break ;
		stack = stack->next;
		i++;
	}
	return (i);
}

int	get_max_pos(t_node *stack, int v)
{
	t_node	*node;
	int		i;

	node = stack;
	i = 0;
	while (node)
	{
		if (node->value == v)
			break ;
		node = node->next;
		i++;
	}
	return (i);
}
