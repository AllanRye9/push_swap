/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_helper_one.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oallan <oallan@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 16:15:21 by oallan            #+#    #+#             */
/*   Updated: 2024/05/22 16:15:36 by oallan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

int	ft_is_integer(int n)
{
	return (n >= '0' && n <= '9');
}

void	ft_error(void)
{
	ft_putstr_fd("Error\n", 2);
	return ;
}

int	ft_duplicate(t_stack *stack_a)
{
	t_stack	*new_node;
	t_stack	*runner;

	new_node = stack_a;
	if (new_node == NULL)
		return (1);
	while (new_node != NULL)
	{
		runner = new_node->link;
		while (runner != NULL)
		{
			if (new_node->data == runner->data)
				return (1);
			runner = runner->link;
		}
		new_node = new_node->link;
	}
	return (0);
}

int	ft_check_ascii(char *str)
{
	int	i;

	i = 0;
	if (str == NULL)
		return (1);
	if (str[i] == '-')
		i++;
	while (str[i])
	{
		if (!ft_is_integer(str[i]))
			return (1);
		i++;
	}
	return (0);
}

int	ft_is_sorted(t_stack *stack_a)
{
	while (stack_a->link != NULL)
	{
		if (stack_a->data > stack_a->link->data)
			return (1);
		stack_a = stack_a->link;
	}
	return (0);
}
