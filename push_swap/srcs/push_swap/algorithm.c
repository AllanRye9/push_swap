#include "../../includes/push_swap.h"

int	ft_atoi2(const char *str)
{
	int				sign;
	long long int	i;

	i = 0;
	sign = 1;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	else if (*str == '+')
		str++;
	while (*str)
	{
		if (!ft_isdigit(*str))
            ft_error();
		i = i * 10 + (*str - 48);
		str++;
	}
	if ((sign * i) > 2147483647 || (sign * i) < -2147483648)
        ft_error();
	return (sign * i);
}

t_stack *ft_sub_process(char **argv)
{
    t_stack *a;
    char **tmp;
    int i;
    int j;

    a = NULL;
    i = 0;
    tmp = ft_split(argv[1], ' ');
    if (tmp == NULL)
    {
        ft_free_str(tmp);
        return NULL;
    }
    while (tmp[i])
    {
        j = ft_atoi2(tmp[i]);
        ft_add_back(&a, ft_stack_new(j));
        i++;
    }
    ft_free_str(tmp);
    return (a);
}

t_stack *ft_process(int argc, char **argv)
{
    t_stack *a;
    int i;
    char **tmp;
    int j;

    i = 1;
    a = NULL;
    if (argc < 2)
        exit(0);
    if (argc == 2)
    {
        a = ft_sub_process(argv);
        if (a == NULL)
            ft_free(&a);
    }
    else
    {
        while (i < argc)
        {
            tmp = ft_split(argv[i], ' ');
            if (tmp == NULL)
            {
                ft_error();
                ft_free_str(tmp);
            }
            j = 0;
            while (tmp[j])
            {
                int num = ft_atoi2(tmp[j]);
                ft_add_back(&a, ft_stack_new(num));
                j++;
            }
            ft_free_str(tmp);
            i++;
        }
    }
    return (a);
}
