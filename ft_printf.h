#ifndef FT_PRINTF
# define FT_PRINT

# include "libft.h"
# include <stdio.h>
# include <stdarg.h>
# include <stdlib.h>

typedef struct s_va
{
	int		counter;
	va_list	args;

}			t_va;

int		ft_printf(const char *format, ...);
void	ischar(t_va *arg_struct);
void	isstring(t_va *arg_struct);
void 	isint(t_va *arg_struct);
void	isunint(t_va *arg_struct);
void	ispointer(t_va *arg_struct);
void	ishex(t_va *arg_struct, char c);

#endif
