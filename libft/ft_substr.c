/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralrawaj <ralrawaj@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/07 12:07:25 by ralrawaj          #+#    #+#             */
/*   Updated: 2025/12/15 15:00:35 by ralrawaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	sub_len(const char *str, size_t len)
{
	size_t	ans;

	ans = 0;
	while (*str)
	{
		ans++;
		str++;
	}
	if (ans < len)
		return (ans + 1);
	return (len + 1);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*ans;
	long long	i;
	long long	idx;

	i = start + len;
	idx = 0;
	ans = malloc(sub_len(s + start, len));
	if (ans == NULL)
		return (NULL);
	while (s[start] && start < i)
	{
		ans[idx] = s[start];
		start++;
		idx++;
	}
	ans[idx] = '\0';
	return (ans);
}
