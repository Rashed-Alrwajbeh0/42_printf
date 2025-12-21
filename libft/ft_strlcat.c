/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralrawaj <ralrawaj@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 14:06:01 by ralrawaj          #+#    #+#             */
/*   Updated: 2025/11/29 15:20:49 by ralrawaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	o(size_t *a, size_t *b, size_t *c)
{
	*a = 0;
	*b = 0;
	*c = 0;
}

size_t	ft_strlcat(char *des, const char *s, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	d;
	size_t	counter;
	char	*src;

	o(&i, &j, &d);
	src = (char *)s;
	counter = ft_strlen(src);
	i = ft_strlen(des);
	if (size <= i)
		return (counter + size);
	else
		counter += i;
	if (size > 0)
		d = size - 1;
	while (i < d)
	{
		if (!src[j])
			break ;
		des[i++] = src[j++];
	}
	des[i] = '\0';
	return (counter);
}
