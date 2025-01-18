/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakoukou <fakoukou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 16:59:30 by fakoukou          #+#    #+#             */
/*   Updated: 2025/01/18 17:07:38 by fakoukou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

int insert_to_array(t_node *stack_a, int *array, int size)
{
	int	i;

	i = 0;
	while (stack_a && i < size)
	{
		array[i] = stack_a->value;
		stack_a = stack_a->next;
		i++;
	}
	return (array);
}



int	*sort_array(int *array, int size)
{
	int	i;
	int	j;
	int	swap;

	j = 0;
	while (j < size)
	{
		i = j + 1;
		while (i < size)
		{
			if (array[j] > array[i])
			{
				swap = array[j];
				array[j] = array[i];
				array[i] = swap;
			}
			i++;
		}
		j++;
	}
	return (array);
}

void	indexing(t_node **stack_a, int *arr, int size)
{
	int		i;
	t_node	*stack;

	i = 0;
	while (i < size)
	{
		stack = *stack_a;
		while (stack)
		{
			if (stack->value == arr[i])
			{
				stack->index = i;
				break ;
			}
			stack = stack->next;
		}
		i++;
	}
}



void	push_to_b(t_node **stack_a, t_node **stack_b, int c)
{
	int	i;
	int	size;

	i = 0;
	size = stack_size(*stack_a);
	while (i < size)
	{
		if ((*stack_a)->index <= i)
		{
			pb(stack_a, stack_b);
			rb(stack_b);
			i++;
		}
		else if ((*stack_a)->index <= (i + c))
		{
			pb(stack_a, stack_b);
			i++;
		}
		else if (get_position(stack_a, (i + c)) < stack_size(*stack_a) / 2)
			ra(stack_a);
		else
			rra(stack_a);
	}
	push_to_a(stack_a, stack_b);
}

void	push_to_a(t_node **stack_a, t_node **stack_b)
{
	int	max;
	int	max_pos;

	max = ft_max(*stack_b);
	max_pos = get_max_pos(*stack_b, max);
	while (stack_size(*stack_b) > 0)
	{
		if (max == (*stack_b)->value)
		{
			pa(stack_b, stack_a);
			if (stack_size(*stack_b) > 0)
			{
				max = get_max(*stack_b);
				max_pos = get_max_pos(*stack_b, max);
			}
		}
		else
		{
			if (max_pos <= stack_size(*stack_b) / 2)
				rb(stack_b);
			else
				rrb(stack_b);
		}
	}
}

