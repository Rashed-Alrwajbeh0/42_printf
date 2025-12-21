/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralrawaj <ralrawaj@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/21 13:10:52 by ralrawaj          #+#    #+#             */
/*   Updated: 2025/12/21 13:10:53 by ralrawaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "libft/libft.h"

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
