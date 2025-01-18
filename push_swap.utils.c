/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakoukou <fakoukou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 08:55:43 by fakoukou          #+#    #+#             */
/*   Updated: 2025/01/18 16:59:51 by fakoukou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void sort_stack(t_node **stack_a, t_node **stack_b, size_t size)
{
   if (size == 2)
		sort2(stack_a);
	else if (size == 3)
		sort3(stack_a);
	else if (size == 4)
		sort4(stack_a, stack_b);
	else if (size == 5)
		sort5(stack_a, stack_b);
	else
		sort_stack_final(stack_a, stack_b, size);
    
}
void sort_stack_final(t_node **stack_a, t_node **stack_b, int size)
{
    int	*array;

	array = malloc(sizeof(int) * size);
	if (!array)
		return ;
	array = fill_array(*stack_a, array, size);
	sort_array(array, size);
	indexing(stack_a, array, size);
	if (size < 250)
		push_to_b(stack_a, stack_b, 15);
	else
		push_to_b(stack_a, stack_b, 40);
	free(array);
}


int sorted_stack_a(t_node *stack_a)
{
    t_node *cc;
    cc = stack_a;
    while(cc != NULL && cc->next != NULL)
    {
        if((cc->next) > (cc->next)->value)
            return 0;
        cc = cc->next;
    }
    return 1;
}
int stack_size(t_node *stack)
{
    t_node *node;
    int i;

    i = 0;
    while(node != NULL)
    {
        i++;
        node = node->next;
    }
    return (i);
}