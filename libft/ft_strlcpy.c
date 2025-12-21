/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralrawaj <ralrawaj@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 14:02:50 by ralrawaj          #+#    #+#             */
/*   Updated: 2025/12/15 15:33:52 by ralrawaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *des, const char *s, size_t size)
{
	size_t	i;
	size_t	j;
	char	*src;

	i = 0;
	j = 0;
	src = (char *)s;
	while (src[j])
		j++;
	if (size == 0)
		return (j);
	while (i < size - 1)
	{
		if (!src[i])
			break ;
		des[i] = src[i];
		i++;
	}
	if (size > 0)
		des[i] = '\0';
	return (j);
}
