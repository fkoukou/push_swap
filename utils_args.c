/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakoukou <fakoukou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 18:42:33 by fakoukou          #+#    #+#             */
/*   Updated: 2025/01/17 21:46:34 by fakoukou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


insert_stack(t_node **stack_a, char **argss)
{
    t_node *new_node;
    int i;
    i = 0;
    while (argss[i])
    {
        new_node =create_node(ft_atoi(argss[i]));
        add_node(stack_a,new_node);
        i++;
    }
}
void fonction_free(char **argss)
{
    int i;
    i = 0;
    while(argss[i])
    {
        free(argss[i]);
        i++;
    }
}
int valide_args(t_node **stack_a, char **argv)
{
    char **argss;
    int i;
    int j;
    
    j = 0;
    i = 1;
    while (argv[i])
    {
        argss = ft_split(argv[i], ' ');
        if(!argss[0])
           return(fonction_free(argss) ,0);
        
        while (argss[j])
        {
            if(ft_isdigit(argss[j]) == 0)
                return(fonction_free(argss), 0);
            if(ft_atoi(argss[j] < INT_MIN || ft_atoi(argss[j]) > INT_MAX))
                return(fonction_free(argss), 0);
            j++;
        }
        insert_stack(stack_a, argss);
        fonction_free(argss);
        i++;
    }
    return(1);
    
}