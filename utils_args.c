/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakoukou <fakoukou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 18:42:33 by fakoukou          #+#    #+#             */
/*   Updated: 2025/01/30 15:18:17 by fakoukou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	inset_to_stack(t_node **stack_a, char **args)
{
	t_node	*node;
	int		i;

	i = 0;
	while (args[i])
	{
		node = create_node(ft_atoi(args[i]));
		add_node_to_stack(stack_a, node);
		i++;
	}
}

int	is_valid(char *args)
{
	int	i;

	i = 0;
	if (args[i] == '-' || args[i] == '+')
		i++;
	if (args[i] == '\0')
		return (0);
	while (args[i])
	{
		if (ft_isdigit(args[i]) == 0)
			return (0);
		i++;
	}
	return (1);
}

void	ft_free(char **args)
{
	int	i;

	i = 0;
	while (args[i])
	{
		free(args[i]);
		i++;
	}
	free(args);
}

int	valide_args(t_node **stack_a, char **argv)
{
	char	**s_args;
	int		i;
	int		j;

	i = 1;
	while (argv[i])
	{
		s_args = ft_split(argv[i], ' ');
		if (!s_args[0])
			return (ft_free(s_args), 0);
		j = 0;
		while (s_args[j])
		{
			if (is_valid(s_args[j]) == 0)
				return (ft_free(s_args), 0);
			if (ft_atoi(s_args[j]) < INT_MIN || ft_atoi(s_args[j]) > INT_MAX)
				return (ft_free(s_args), 0);
			j++;
		}
		inset_to_stack(stack_a, s_args);
		ft_free(s_args);
		i++;
	}
	return (1);
}
