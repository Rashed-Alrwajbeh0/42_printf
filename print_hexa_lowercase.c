/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hexa_lowercase.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralrawaj <ralrawaj@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/21 13:11:36 by ralrawaj          #+#    #+#             */
/*   Updated: 2025/12/21 13:11:37 by ralrawaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_hexa_lowercase(unsigned long num)
{
	char	*str;
	int		counter;

	counter = 0;
	str = "0123456789abcdef";
	if (num >= 16)
		counter += print_hexa_lowercase(num / 16);
	ft_putchar_fd(str[num % 16], 1);
	return (counter + 1);
}
