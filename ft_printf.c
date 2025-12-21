/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralrawaj <ralrawaj@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/21 13:10:47 by ralrawaj          #+#    #+#             */
/*   Updated: 2025/12/21 13:10:48 by ralrawaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	va_list	list;
	int		i;
	int		counter;

	va_start(list, str);
	counter = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == '%')
			counter += determine_the_var(str[++i], list);
		else
		{
			ft_putchar_fd(str[i], 1);
			counter++;
		}
		i++;
	}
	va_end(list);
	return (counter);
}
