/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralrawaj <ralrawaj@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 13:48:00 by ralrawaj          #+#    #+#             */
/*   Updated: 2025/11/29 14:00:31 by ralrawaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t t)
{
	unsigned char	*r;
	size_t			i;

	i = 0;
	r = (unsigned char *)s;
	while (i < t)
	{
		r[i] = 0;
		i++;
	}
}
