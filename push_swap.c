/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakoukou <fakoukou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 18:38:30 by fakoukou          #+#    #+#             */
/*   Updated: 2025/01/18 16:30:22 by fakoukou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void  fonction_free(t_node **stack)
{
    t_node *node;

    while (*stack)
    {
        node = *stack;
        *stack = (*stack)-> next;
        free(node);
    }
    
}

int main(int argc, char **argv)
{
    t_node *stack_a;
    t_node *stack_b;

    size_t size;

    if(argc < 2)
        return (0);
    stack_a = NULL;
    stack_b = NULL;

    if(valide_args(&stack_a, argv) == 0 || check_double(stack_a) == 0)
    {
        write(2, "error\n", 6);
        fonction_free(&stack_a);
        return(1);
    }
    size = stack_size(stack_a);
    if(sorted_stack_a(stack_a) == 1)
    {
        fonction_free(&stack_a);
        return(0);
    }
    else
    {
        sort_stack(stack_a, stack_b, size);
        fonction_free(&stack_a);
        return (0);   
    }
}