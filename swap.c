/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakoukou <fakoukou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 13:17:22 by fakoukou          #+#    #+#             */
/*   Updated: 2025/01/25 13:17:44 by fakoukou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void	swap(t_node **stack)
{
	t_node	*head;
	t_node	*next_nd;
	int		tmp;

	if (stack && *stack && (*stack)->next)
	{
		head = *stack;
		next_nd = head->next;
		tmp = head->value;
		head->value = next_nd->value;
		next_nd->value = tmp;
	}
}

void	sa(t_node **stack_a)
{
	swap(stack_a);
	write(1, "sa\n", 3);
}

void	sb(t_node **stack_b)
{
	swap(stack_b);
	write(1, "sb\n", 3);
}

void	ss(t_node **stack_a, t_node **stack_b)
{
	swap(stack_a);
	swap(stack_b);
	write(1, "ss\n", 3);
}