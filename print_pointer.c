#include "ft_printf.h"

int	print_pointer(void *ptr)
{
	if (!ptr)
	{
		ft_putstr_fd("(nil)", 1);
		return (5);
	}
	ft_putstr_fd("0x", 1);
	return (2 + print_hexa_lowercase((unsigned long)ptr));
}
