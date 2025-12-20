#include "ft_printf.h"

int	print_hexa_uppercase(unsigned long num)
{
	char	*str;
	int		counter;

	counter = 0;
	str = "0123456789ABCDEF";
	if (num >= 16)
		counter += print_hexa_uppercase(num / 16);
	ft_putchar_fd(str[num % 16], 1);
	return (counter + 1);
}
