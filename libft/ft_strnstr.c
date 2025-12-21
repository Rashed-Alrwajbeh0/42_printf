/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralrawaj <ralrawaj@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 11:07:35 by ralrawaj          #+#    #+#             */
/*   Updated: 2025/12/15 15:58:34 by ralrawaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	help(const char *big_str, const char *small_str, size_t i, size_t n)
{
	size_t	j;

	j = 0;
	while (small_str[j] && i + j < n && big_str[i + j])
	{
		if (small_str[j] != big_str[i + j])
			return (0);
		j++;
	}
	return (small_str[j] == '\0');
}

char	*ft_strnstr(const char *bs, const char *small_str, size_t n)
{
	size_t	i;
	char	*big_str;

	big_str = (char *)bs;
	if (*small_str == '\0')
		return (big_str);
	i = 0;
	while (i < n && big_str[i])
	{
		if (help(big_str, small_str, i, n))
			return (big_str + i);
		i++;
	}
	return (NULL);
}
