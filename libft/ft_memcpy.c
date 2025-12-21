/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralrawaj <ralrawaj@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 14:33:25 by ralrawaj          #+#    #+#             */
/*   Updated: 2025/11/29 14:34:01 by ralrawaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *copy_to, const void *copy_from, size_t n)
{
	unsigned char	*f;
	unsigned char	*t;
	size_t			i;

	i = 0;
	f = (unsigned char *) copy_from;
	t = (unsigned char *) copy_to;
	while (i < n)
	{
		t[i] = f[i];
		i++;
	}
	return (t);
}
