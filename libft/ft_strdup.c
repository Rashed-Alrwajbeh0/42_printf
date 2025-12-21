/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralrawaj <ralrawaj@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/07 12:07:38 by ralrawaj          #+#    #+#             */
/*   Updated: 2025/12/07 12:07:39 by ralrawaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	len(const char *str)
{
	size_t	ans;

	ans = 0;
	while (*str)
	{
		ans++;
		str++;
	}
	return (ans);
}

char	*ft_strdup(const char *str)
{
	char	*ans;
	size_t	i;

	ans = malloc(len(str) + 1);
	if (ans == NULL)
		return (NULL);
	i = 0;
	while (str[i])
	{
		ans[i] = str[i];
		i++;
	}
	ans[i] = '\0';
	return (ans);
}
