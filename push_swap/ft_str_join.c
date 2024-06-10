/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_join.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oallan <oallan@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 16:05:17 by oallan            #+#    #+#             */
/*   Updated: 2024/05/22 16:05:32 by oallan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

static int	ft_get_enough_space(char **arg)
{
	int	i;
	int	total;

	i = 0;
	total = 0;
	while (arg[i] != NULL)
	{
		total += ft_strlen(arg[i]) + 2;
		i++;
	}
	return (total);
}

char	*ft_strjoin(char *arg[])
{
	char	*mem;
	int		i;
	int		k;
	int		j;

	mem = malloc(sizeof(char) * ft_get_enough_space(arg) + 1);
	if (!mem)
		return (NULL);
	i = 1;
	k = 0;
	while (arg[i] != NULL)
	{
		j = 0;
		if (i > 1)
			mem[k++] = ' ';
		while (arg[i][j] != '\0')
			mem[k++] = arg[i][j++];
		i++;
	}
	mem[k] = '\0';
	return (mem);
}

void	ft_put_nbr(int n)
{
	char	*str;

	str = "0123456789";
	if (n > 9)
		ft_put_nbr(n / 10);
	write(1, &str[n % 10], 1);
}
