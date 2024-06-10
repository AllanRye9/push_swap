/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_helper_functions.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oallan <oallan@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 15:19:19 by oallan            #+#    #+#             */
/*   Updated: 2024/05/22 16:03:40 by oallan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

int	ft_count_node(t_stack *head)
{
	t_stack		*node;
	size_t		i;

	node = head;
	i = 0;
	if (head == NULL)
		return (0);
	while (node)
	{
		node = node->link;
		i++;
	}
	return (i);
}

int	ft_count_node_b(t_stack_b *head)
{
	t_stack_b		*node;
	size_t			i;

	node = head;
	i = 0;
	if (head == NULL)
		return (0);
	while (node)
	{
		node = node->link;
		i++;
	}
	return (i);
}

void	ft_call(t_call_many func, t_stack **stack_a, int n)
{
	while (n--)
		func(stack_a, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	ft_push(t_stack **head, int data)
{
	t_stack	*new_node;

	new_node = (t_stack *)malloc(sizeof(t_stack));
	if (!new_node)
		return ;
	new_node->data = data;
	new_node->link = *head;
	*head = new_node;
}
