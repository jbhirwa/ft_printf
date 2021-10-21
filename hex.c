#include "ft_printf.h"

static char	*numlen(unsigned long n, int *len)
{
	char	*str;

	while (n >= 16)
	{
		n = n / 16;
		*len++;
	}
	str = (char *)malloc(*len + 1) * sezeof(char));
	if (str == NULL)
		return(NULL);
	str[*len] = '\0';
	return (str);
}

void	ispointer(t_va arg_struct)
{
	int				len;
	char			*str;
	unsigned long	n;

	n = va_arg(arg_struct->args, unsigned long);
	len = 1;
	str = numlen(n, &len);
	ft_putstr_fd("0x", 1);
	arg_struct->counter+= 2;
	len--;
	while (len >= 0)
	{
		if (n % 16 <= 10)
			str[len] = '0' + (n % 16);
		else
			str[len] = 'A' + (n % 16);
		n = n / 16;
		len--;
		arg_struct->counter++;
	}
	ft_putstr_fd(str, 1);
	free(str);
}

void	ispointer(t_va arg_struct)
{
	int				len;
	char			*str;
	unsigned int	n;

	n = va_arg(arg_struct->args, unsigned int);
	len = 1;
	str = numlen(n, &len);
	len--;
	while (len >= 0)
	{
		if (n % 16 <= 10)
			str[len] = '0' + (n % 16);
		else if (c == 'x')
			str[len] = 'a' - 10 + (n % 16);
		else if (c == 'X')
			str[len] = 'A' - 10 + (n % 16);
		n = n / 16;
		len--;
		arg_struct->counter++;
	}
	ft_putstr_fd(str, 1);
	free(str);
}
