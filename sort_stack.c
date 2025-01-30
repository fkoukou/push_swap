/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakoukou <fakoukou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 08:57:42 by fakoukou          #+#    #+#             */
/*   Updated: 2025/01/30 15:33:00 by fakoukou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void	sort2(t_node **stack)
{
	if ((*stack)->value > (*stack)->next->value)
		sa(stack);
	else
		return ;
}

void	sort3(t_node **stack)
{
	if ((*stack)->value == ft_max(*stack))
		ra(stack);
	else if ((*stack)->next->value == ft_max(*stack))
		rra(stack);
	sort2(stack);
}

void	sort4(t_node **stack_a, t_node **stack_b)
{
	if ((*stack_a)->value == ft_min(*stack_a))
		pb(stack_a, stack_b);
	else if ((*stack_a)->next->value == ft_min(*stack_a))
	{
		sa(stack_a);
		pb(stack_a, stack_b);
	}
	else if ((*stack_a)->next->next->value == ft_min(*stack_a))
	{
		ra(stack_a);
		ra(stack_a);
		pb(stack_a, stack_b);
	}
	else if ((*stack_a)->next->next->next->value == ft_min(*stack_a))
	{
		rra(stack_a);
		if (check_sorted(*stack_a))
			return ;
		pb(stack_a, stack_b);
	}
	sort3(stack_a);
	pa(stack_b, stack_a);
}

void	sort5(t_node **stack_a, t_node **stack_b)
{
	if ((*stack_a)->value == ft_min(*stack_a))
		pb(stack_a, stack_b);
	else if ((*stack_a)->next->value == ft_min(*stack_a))
	{
		sa(stack_a);
		pb(stack_a, stack_b);
	}
	else if ((*stack_a)->next->next->value == ft_min(*stack_a))
	{
		ra(stack_a);
		ra(stack_a);
		pb(stack_a, stack_b);
	}
	else if ((*stack_a)->next->next->next->value == ft_min(*stack_a))
		rra_pb(stack_a, stack_b);
	else if ((*stack_a)->next->next->next->next->value == ft_min(*stack_a))
	{
		rra(stack_a);
		if (check_sorted(*stack_a))
			return ;
		pb(stack_a, stack_b);
	}
	sort4(stack_a, stack_b);
	pa(stack_b, stack_a);
}




