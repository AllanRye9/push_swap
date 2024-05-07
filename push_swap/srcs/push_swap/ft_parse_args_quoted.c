#include "../../includes/push_swap.h"

void ft_free_str(char **lst)
{
    char *n1;

    if (!lst)
        return;
    while (*lst)
    {
        n1 = *lst;
        lst++;
        free(n1);
    }
    free(lst); 
    lst = NULL;
}

t_stack *ft_parse_args_quoted(char **argv)
{
    t_stack *stack_a;
    char **tmp;
    int i;
    int j;

    stack_a = NULL;
    i = 0;
    tmp = ft_split(argv[1], 32);
    if (tmp == NULL)
    {
        ft_error();
        free(tmp);
        return 0;
    }
    list_args(tmp, &stack_a);
    ft_free_str(tmp);
    return (stack_a);
}
