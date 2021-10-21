#include "ft_printf.h"

void	isint(t_va *arg_struct)
{
	int *num;
	num = va_arg(arg_struct->args, int);
	ft_putnbr_fd(num, 1);
	arg_struct->counuter+= num_len((unsigned int)num); /* here*/
}

void	isunint(t_va *arg_struct)
{
	char			*str;
	unsigned int	num;
	
	num = va_arg(arg_struct->args, unsigned int);
	str = uitao(num);
	ft_putstr_fd(str, 1);
	arg_struct->counter += num_len(num)
	free(str);
}

static int	num_len(unsigned int n)
{
	int len;
	
	len = 0;
	if (n < 0)
		len++;
	while (n != 0)
	{
		len++;
		n = n / 10;
	}
	return(len);
}

static char	*uitoa(unsigned int n)
{
	char	*str;
	int		len;

	len = numlen(n);
	str = (char *)malloc(len + 1 * sizeof(char));
	if (str == NULL)
		return (NULL);
	str[len] = '\0';
	while (len > 0)
	{
		str[--len] = n % 10 + '0';
		n = n / 10;
	}
	return (str);
}
