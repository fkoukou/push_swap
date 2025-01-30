/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakoukou <fakoukou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 18:38:30 by fakoukou          #+#    #+#             */
/*   Updated: 2025/01/30 15:16:37 by fakoukou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_the_stack(t_node **stack_a, t_node **stack_b, int s_size)
{
	if (s_size == 2)
		sort2(stack_a);
	else if (s_size == 3)
		sort3(stack_a);
	else if (s_size == 4)
		sort4(stack_a, stack_b);
	else if (s_size == 5)
		sort5(stack_a, stack_b);
	else
		sort_stack(stack_a, stack_b, s_size);
}

void	sort_stack(t_node **stack_a, t_node **stack_b, int s_size)
{
	int	*arr;

	arr = malloc(sizeof(int) * s_size);
	if (!arr)
		return ;
	arr = insert_array(*stack_a, arr, s_size);
	sort_array(arr, s_size);
	index_arr(stack_a, arr, s_size);
	if (s_size < 250)
		push_to_b(stack_a, stack_b, 15);
	else
		push_to_b(stack_a, stack_b, 40);
	free(arr);
}

void	free_stack(t_node **stack)
{
	t_node	*node;

	while (*stack)
	{
		node = *stack;
		(*stack) = (*stack)->next;
		free(node);
	}
}

int	main(int ac, char **av)
{
	t_node	*stack_a;
	t_node	*stack_b;
	int		s_size;

	if (ac < 2)
		return (0);
	stack_a = NULL;
	stack_b = NULL;
	if (valide_args(&stack_a, av) == 0 || double_arg(stack_a) == 0)
	{
		//printf("non valide");
		write(2, "Error\n", 6);
		free_stack(&stack_a);
		return (1);
	}
	s_size = stack_size(stack_a);
	  // printf("size == %d\n", s_size);

	if (check_sorted(stack_a) == 1)
	{
		free_stack(&stack_a);
		return (0);
	}
	else
		sort_the_stack(&stack_a, &stack_b, s_size);
	free_stack(&stack_a);
	return (0);
}