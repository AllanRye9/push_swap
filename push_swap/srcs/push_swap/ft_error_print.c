#include "../../includes/push_swap.h"

//Here an error message is being printed out
void	ft_error(void)
{	
	ft_putstr_fd("Error!\n", 2);
	ft_putstr_fd("check if integer is double or is not integer type <0 to 9>! or invalid command or empty input.\n", 2);
	exit(1);
}
