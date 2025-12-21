/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralrawaj <ralrawaj@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/07 12:07:49 by ralrawaj          #+#    #+#             */
/*   Updated: 2025/12/15 15:01:06 by ralrawaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	n_len(long i)
{
	int	ans;

	ans = 0;
	if (i == 0)
		return (1);
	while (i > 0)
	{
		ans++;
		i /= 10;
	}
	return (ans);
}

static char	*solve(int len, long num, int is_minas)
{
	char	*ans;

	ans = malloc(len);
	if (ans == NULL)
		return (NULL);
	ans[--len] = '\0';
	len--;
	if (is_minas)
		ans[0] = '-';
	if (num == 0)
		ans[0] = '0';
	while (num > 0)
	{
		ans[len] = '0' + num % 10;
		len--;
		num /= 10;
	}
	return (ans);
}

char	*ft_itoa(int n)
{
	int		len;
	long	num;

	num = n;
	if (num < 0)
	{
		len = 2 + n_len(-num);
		return (solve(len, -num, 1));
	}
	else
	{
		len = 1 + n_len(num);
		return (solve(len, num, 0));
	}
}
