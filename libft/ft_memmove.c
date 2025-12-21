/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralrawaj <ralrawaj@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 14:25:44 by ralrawaj          #+#    #+#             */
/*   Updated: 2025/11/29 15:38:32 by ralrawaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *move_to, const void *move_from, size_t n)
{
	unsigned char	*f;
	unsigned char	*t;
	size_t			i;

	i = 0;
	f = (unsigned char *)move_from;
	t = (unsigned char *)move_to;
	if (move_from == move_to || n == 0)
		return (move_to);
	if ((f + n <= t) || (t + n <= f))
		ft_memcpy(move_to, move_from, n);
	else
	{
		if (t > f)
			while (n-- > 0)
				t[n] = f[n];
		else
		{
			i = 0;
			while (i++ < n)
				t[i - 1] = f[i - 1];
		}
	}
	return (move_to);
}
