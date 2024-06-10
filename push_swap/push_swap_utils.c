/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oallan <oallan@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 16:31:55 by oallan            #+#    #+#             */
/*   Updated: 2024/05/22 16:32:10 by oallan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	ft_putstr(char *str)
{
	while (*str)
		write (1, str++, 1);
	write (1, "\n", 1);
}

void	ft_swap(int *item1, int *item2)
{
	int	temp;

	temp = *item1;
	*item1 = *item2;
	*item2 = temp;
}

void	ft_push_b(t_stack_b **headref, int data)
{
	t_stack_b	*new_node;

	new_node = (t_stack_b *)malloc(sizeof(t_stack_b));
	if (!new_node)
		return ;
	new_node->data = data;
	new_node->link = *headref;
	*headref = new_node;
}

int	ft_get_index_a(t_stack *head, int index)
{
	t_stack		*node;
	int			i;

	node = head;
	i = 0;
	if (node == NULL)
		return (0);
	while (node != NULL)
	{
		if (i == index)
			return (node->data);
		node = node->link;
		i++;
	}
	return (0);
}

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		write(fd, &s[i], 1);
		i++;
	}
}