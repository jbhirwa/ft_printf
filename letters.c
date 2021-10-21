#include "ft_printf.h"

void	ischar(t_va *arg_struct)
{
	ft_putchar_fd(va_arg(arg_struct->args, int), 1);
	arg_struct->counter++;
}

void	isstring(t_va *arg_struct)
{
	char	*str;
	int		len;

	str = va_arg(arg_struct->args, char *);
	if (str == NULL)
	{
		ft_putstr_fd("(null)", 1);
		arg_struct->counter+= 6;
	}
	else
	}
		len = ft_strlen(str);
		ft_putstr_fd(str, 1);
		arg_struct->counter+= len; 
	}
}
