/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakoukou <fakoukou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 18:35:23 by fakoukou          #+#    #+#             */
/*   Updated: 2025/01/30 15:31:59 by fakoukou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include<stdio.h>
#include<unistd.h>
#include<limits.h>
#include<stdlib.h>

typedef struct node
{
	int			value;
	int			index;
	struct node	*next;
}	t_node;

int			*insert_array(t_node *stack_a, int *arr, int s_size);
int			*sort_array(int *arr, int s_size);
void		index_arr(t_node **stack_a, int *arr, int size);
void		push_to_b(t_node **stack_a, t_node **stack_b, int c);
void		push_to_a(t_node **stack_a, t_node **stack_b);

void		inset_to_stack(t_node **stack_a, char **args);
int			is_valid(char *args);
void		ft_free(char **args);
int			valide_args(t_node **stack_a, char **argv);

int			double_arg(t_node *stack);
t_node		*create_node(int value);
void		add_node_to_stack(t_node **head, t_node *new);
int			ft_isdigit(char c);
int	ft_atoi(const char *str);
t_node		*last_node(t_node *stack);
t_node		*before_last_node(t_node *stack);

int			check_sorted(t_node *stack_a);
int			stack_size(t_node *stack_a);
int			get_index_pos(t_node **stack_a, int ic);
int			get_max_pos(t_node *stack, int v);

void		sosort_the_stack(t_node **stack_a, t_node **stack_b, int s_size);
void		sort_stack(t_node **stack_a, t_node **stack_b, int s_size);
void		free_stack(t_node **stack);


void		push(t_node **stack_1, t_node **stack_2);
void		pa(t_node **stack_b, t_node **stack_a);
void		pb(t_node **stack_a, t_node **stack_b);

void		reverse_rotate(t_node **stack);
void		rra(t_node **stack_a);
void		rrb(t_node **stack_b);
void		rrr(t_node **stack_a, t_node **stack_b);

void		rotate(t_node **stack);
void		ra(t_node **stack_a);
void		rb(t_node **stack_b);
void		rr(t_node **stack_a, t_node **stack_b);

void		swap(t_node **stack);
void		sa(t_node **stack_a);
void		sb(t_node **stack_b);
void		ss(t_node **stack_a, t_node **stack_b);

int			ft_max(t_node *stack);
int			ft_min(t_node *stack);
void		rra_pb(t_node **stack_a, t_node **stack_b);

void		sort2(t_node **stack);
void		sort3(t_node **stack);
void		sort4(t_node **stack_a, t_node **stack_b);
void		sort5(t_node **stack_a, t_node **stack_b);

char		**ft_split(char const *s, char c);
#endif