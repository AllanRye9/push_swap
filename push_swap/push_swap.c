/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oallan <oallan@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 16:23:44 by oallan            #+#    #+#             */
/*   Updated: 2024/05/22 16:39:43 by oallan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

int	ft_check_overflow(char *argv)
{
	if (ft_atoi(argv) > INT_MAX || ft_atoi(argv) < INT_MIN)
		return (1);
	return (0);
}

void	ft_whitespace(const char **str)
{
	while (**str == ' ' || (**str >= '\t' && **str <= '\r'))
		(*str)++;
}

int	ft_sign(const char **str)
{
	int	sign;

	sign = 1;
	ft_whitespace(str);
	if (**str == '-' || **str == '+')
	{
		if (**str == '-')
			sign = -1;
		(*str)++;
	}
	return (sign);
}

long long int	ft_atoi(const char *str)
{
	long long int	result;
	int				sign;
	int				digit;

	sign = ft_sign(&str);
	result = 0;
	while (*str && (*str >= '0' && *str <= '9'))
	{
		digit = *str - '0';
		result = result * 10 + digit;
		str++;
	}
	return (result * sign);
}

void	ft_display(t_stack *stak)
{
	t_stack	*stack_a ;

	stack_a = stak;
	if (stack_a == NULL)
		return ;
	while (stack_a != NULL)
	{
		ft_put_nbr(stack_a->data);
		write(1, "\n", 1);
		stack_a = stack_a->link;
	}
}
