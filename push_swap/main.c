/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oallan <oallan@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 16:08:37 by oallan            #+#    #+#             */
/*   Updated: 2024/05/22 16:13:13 by oallan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

int	main(int ac, char *argv[])
{
	t_stack	*stack_a;
	t_stack	*stack_b;
	
	stack_a = NULL;
	stack_b = NULL;
	if (ac > 1 && ft_run_through(argv))
	{
		ft_parse(&stack_a, argv);
		if (ft_duplicate(stack_a))
			ft_error();
		else if (ft_is_sorted(stack_a))
			ft_sort_num(&stack_a, &stack_b);
		else if (ac == 2 || !ft_is_sorted(stack_a))
			return (ft_free_stack(stack_a), 0);
		ft_free_stack(stack_a);
		return (1);
	}
	free(stack_a);
	free(stack_b);
}
