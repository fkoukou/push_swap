/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakoukou <fakoukou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 18:35:23 by fakoukou          #+#    #+#             */
/*   Updated: 2025/01/18 17:02:42 by fakoukou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include<stdio.h>
#include<unistd.h>
#include<limits.h>
#include<stdlib.h>

typedef struct s_node
{
    int value;
    int index;
    struct s_node *next;
}t_node;

//pushswap.utils.c
int	ft_isdigit(char *argss);
int	ft_isdigit1(char c);
int	ft_atoi(const char *str);
char	**ft_split(const char *s, char c);
void sort_stack(t_node **stack_a, t_node **stack_b, size_t size);




// sort_stack.c
void sort2(t_node **stack);
void sort3(t_node **stack);
void sort3(t_node **stack);
void sort4(t_node **stack_a, t_node **stack_b);
void	sort5(t_node **stack_a, t_node **stack_b);



int stack_size(t_node *stack);


//sort_stack_utilis.c
int get_position(t_node *stack_a, int valeur);
int ft_max(t_node *stack);
int ft_min(t_node *stack);



//sort.c
int insert_to_array(t_node *stack_a, int *array, int size);
int	*sort_array(int *array, int size);


#endif