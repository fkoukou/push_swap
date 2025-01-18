/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fonction_utilis.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakoukou <fakoukou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 20:16:17 by fakoukou          #+#    #+#             */
/*   Updated: 2025/01/17 21:31:13 by fakoukou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_isdigit(char *argss)
{
	int	i;

	i = 0;
	if (argss[i] == '-' || argss[i] == '+')
		i++;
	if (argss[i] == '\0')
		return (0);
	while (argss[i])
	{
		if (ft_isdigit(argss[i]) == 0)
			return (0);
		i++;
	}
	return (1);
}


int	ft_atoi(const char *str)
{
	int	i;
	int	signe;
	int	result;

	i = 0;
	signe = 1;
	result = 0;
	while (str[i] == '\t' || str[i] == ' ' || str[i] == '\n' || str[i] == '\v'
		|| str[i] == '\f' || str[i] == '\r')
		i++;
	if (str[i] == '-')
	{
		signe = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] >= 48 && str[i] <= 57)
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * signe);
}


int	ft_isdigit1(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
