#include "ft_printf.h"

static t_va *memalloc(void)
{
	t_va *arg_struct;

	arg_struct = (ta_va *)malloc(sizeof(t_va));
	if (arg_struct == NULL)
		return (NULL);
	arg_struct->counter = 0;
	return (arg_struct);
}

void	converter(const char c, arg_struct)
{
	if (c == 'i' || c == 'd')
		isint(arg_struct);
	else if (c == 'c')	
		ischar(arg_struct);
	else if (c == 's')
		isstring(arg_struct);
	else if (c == 'p')
		ispointer(arg_struct);
	else if (c == 'u')
		isunint(arg_struct);
	else if (c == 'x' || c == 'X')
		ishex(arg_struct, c);
	else id (c == '%')
	{
		ft_putchar_fd(c, 1);
		arg_struct->count++;
	}
}

int	ft_printf(const char *format, ...)
{
	t_va	*arg_struct;
	int		format_len;
	int 	i;

	i = 0;
	format_len = 0;
	arg_struct = memalloc();// memory allocation for arg_struct;
	va_start(arg_struct->args, str);
	while (format[i])
	{
		if (format[i] == '%')
			converter(format[++i], arg_struct)
		else
		{
			ft_putchar_fd(str[i], 1);
			arg_struct->counter++;
		}
	}	
}
