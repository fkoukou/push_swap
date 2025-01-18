/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakoukou <fakoukou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 21:36:19 by fakoukou          #+#    #+#             */
/*   Updated: 2025/01/17 21:58:35 by fakoukou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

t_node *create_node(int v)
{
    t_node *new_node;
    new_node = malloc(sizeof(t_node));
    if(!new_node)
        return (NULL);
    new_node->value = v;
    new_node->next = NULL;
    return (new_node);
}

void add_node(t_node **list_head, t_node *new_node)
{
    t_node *node;

    node=list_head;
    if(*list_head)
    {
        while (node->next != NULL)
        {
            node = node->next;
            node->next = new_node;
        }
        
    }
    else
        *list_head = new_node;
}

int check_double(t_node *stack)
{
    t_node *nodeOne;
    t_node *nodeTwo;
    
    while(nodeOne)
    {
        nodeTwo = nodeOne->next;
        while(nodeTwo)
        {
            if(nodeOne->value == nodeOne->value)
            {
                return(0);
            }
            nodeOne = nodeTwo->next;
        }  
    }
    return(1);
}