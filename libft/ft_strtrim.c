/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralrawaj <ralrawaj@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/07 12:08:35 by ralrawaj          #+#    #+#             */
/*   Updated: 2025/12/15 17:46:47 by ralrawaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check(char c, const char *set)
{
	size_t	j;

	j = 0;
	while (set[j])
	{
		if (set[j] == c)
			return (1);
		j++;
	}
	return (0);
}

static size_t	len(const char *str)
{
	size_t	ans;

	ans = 0;
	while (str[ans])
		ans++;
	return (ans);
}

static size_t	first_del(const char *str1, const char *str2)
{
	size_t	i;
	size_t	ans;

	i = 0;
	ans = 0;
	while (str1[i])
	{
		if (check(str1[i], str2))
			ans++;
		else
			return (ans);
		i++;
	}
	return (ans);
}

static size_t	scd_del(const char *str1, const char *str2)
{
	size_t	i;
	size_t	ans;

	i = len(str1);
	if (!i)
		return (0);
	else
		i--;
	ans = 0;
	while (1)
	{
		if (check(str1[i], str2))
			ans++;
		else
			return (ans);
		if (i == 0)
			return (ans);
		i--;
	}
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*ans;
	char	*g;

	start = first_del(s1, set);
	end = len(s1) - scd_del(s1, set);
	if (start >= end)
		ans = malloc(1);
	else
		ans = malloc(end - start + 1);
	if (ans == NULL)
		return (NULL);
	g = ans;
	while (start < end)
	{
		*ans = s1[start];
		start++;
		ans++;
	}
	*ans = '\0';
	return (g);
}
