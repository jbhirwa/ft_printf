#include "ft_printf.h"

staatic t_va *memalloc(void)
{
	t_va *arg_struct;

	arg_struct = (ta_va *)malloc(sizeof(t_va));
	if (arg_struct == NULL)
		return (NULL);
	arg_struct->counter = 0;
	return (arg_struct);
}

// converter;

int	ft_printf(const char *format, ...)
{
	t_va	*arg_struct;
	int		format_len;
	int 	i;

	i = 0;
	format_len = 0;
	arg_struct = memalloc();// memory allocation for arg_struct;
	va_start(arg_struct->args, str);
//	while loop (if )
	
}
