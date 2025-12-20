#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "libft.h"

void	print_char(char c);
int		determine_the_var(char c, va_list list);
int		print_hexa_lowercase(unsigned long num);
int		print_pointer(void *ptr);
int		print_unsigned_int(unsigned int n);
int		print_hexa_uppercase(unsigned long num);
int		print_int(int n);
int		print_string(char *str);
int		ft_printf(const char *str, ...);
#endif
