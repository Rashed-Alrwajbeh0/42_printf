/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralrawaj <ralrawaj@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/07 12:07:25 by ralrawaj          #+#    #+#             */
/*   Updated: 2025/12/21 21:12:06 by ralrawaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	sub_len(const char *str, size_t len)
{
	size_t	ans;

	ans = 0;
	while (str[ans])
		ans++;
	if (ans < len)
		return (ans + 1);
	return (len + 1);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ans;
	size_t	i;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_calloc(1, 1));
	ans = malloc(sub_len(s + start, len));
	if (!ans)
		return (NULL);
	i = 0;
	while (s[start] && i < len)
	{
		ans[i] = s[start];
		start++;
		i++;
	}
	ans[i] = '\0';
	return (ans);
}
