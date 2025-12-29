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

static int	num_len(int n)
{
	int	ans;

	if (n < 0)
		ans = 1;
	else
		ans = 0;
	while (n != 0)
	{
		n /= 10;
		ans++;
	}
	if (!n && !ans)
		return (1);
	return (ans);
}

int	print_int(int n)
{
	int	len;

	len = num_len(n);
	ft_putnbr_fd(n, 1);
	return (len);
}
