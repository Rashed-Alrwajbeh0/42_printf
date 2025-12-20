#include "ft_printf.h"

static int	hexa_functions(char c, va_list list)
{
	if (c == 'x')
		return (print_hexa_lowercase(va_arg(list, unsigned int)));
	return (print_hexa_uppercase(va_arg(list, unsigned int)));
}

static void	help(char c, int *counter)
{
	ft_putchar_fd('%', 1);
	if (c != '\0')
	{
		ft_putchar_fd(c, 1);
		(*counter)++;
	}
}

int	determine_the_var(char c, va_list list)
{
	int	counter;

	counter = 1;
	if (c == 'c')
		print_char(va_arg(list, int));
	else if (c == 's')
		counter = print_string(va_arg(list, char *));
	else if (c == 'p')
		counter = print_pointer(va_arg(list, void *));
	else if (c == 'i' || c == 'd')
		counter = print_int(va_arg(list, int));
	else if (c == 'u')
		counter = print_unsigned_int(va_arg(list, unsigned int));
	else if (c == 'x' || c == 'X')
		counter = hexa_functions(c, list);
	else if (c == '%')
		ft_putchar_fd(c, 1);
	else
		help(c, &counter);
	return (counter);
}
