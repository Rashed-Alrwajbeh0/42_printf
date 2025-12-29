/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   determinr_the_var.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralrawaj <ralrawaj@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/21 13:10:33 by ralrawaj          #+#    #+#             */
/*   Updated: 2025/12/21 13:10:34 by ralrawaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	print_and_count(unsigned int n)
{
	int	counter;

	counter = 0;
	if (n >= 10)
		counter += print_and_count(n / 10);
	ft_putchar_fd(n % 10 + '0', 1);
	return (counter + 1);
}

int	print_unsigned_int(unsigned int n)
{
	return (print_and_count(n));
}
