/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stack_utils.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakoukou <fakoukou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 15:45:13 by fakoukou          #+#    #+#             */
/*   Updated: 2025/01/18 16:58:42 by fakoukou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include"push_swap.h"

int get_position(t_node *stack_a, int valeur)
{
    int		i;
	t_node	*stack;

	stack = stack_a;
	i = 0;
	while (i < stack_size(stack_a))
	{
		if (stack->index < valeur)
			break ;
		stack = stack->next;
		i++;
	}
	return (i);
}

int ft_max(t_node *stack)
{
    t_node *node;
    int max;
    
    node = stack;
    if(!stack)
        return 0;
    max = node->value;
    while(node)
    {
        if(node->next != NULL && max < node->next)
            max = node->value;
    }
    return max;
}


int ft_min(t_node *stack)
{
     t_node *node;
    int min;
    
    node = stack;
    if(!stack)
        return 0;
    min = node->value;
    while(node)
    {
        if(node->next != NULL && min > node->next)
            min = node->value;
    }
    return min;
}