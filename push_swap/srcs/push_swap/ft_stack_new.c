#include "../../includes/push_swap.h"

// Creates new stack node with given number.
t_stack	*ft_stack_new(int content)
{
	t_stack	*new;

	new = malloc(sizeof (t_stack));
	if (!new)
		return 0;
	new->nbr = content;
	new->next = NULL;
	return (new);
}
