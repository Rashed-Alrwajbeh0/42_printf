/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralrawaj <ralrawaj@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 17:36:59 by ralrawaj          #+#    #+#             */
/*   Updated: 2025/12/15 17:37:29 by ralrawaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(const char *str, char c)
{
	int	test;
	int	i;
	int	ans;

	test = 0;
	i = -1;
	ans = 0;
	while (str[++i])
	{
		if (str[i] == c)
		{
			if (test)
				ans++;
			test = 0;
			continue ;
		}
		test++;
	}
	if (test)
		return (++ans);
	return (ans);
}

static char	*temp(const char *str, int f_idx, int l_idx)
{
	char	*ans;
	int		i;

	ans = malloc(l_idx - f_idx + 1);
	if (!ans)
		return (NULL);
	i = 0;
	while (f_idx < l_idx)
	{
		ans[i] = str[f_idx];
		f_idx++;
		i++;
	}
	ans[i] = '\0';
	return (ans);
}

static int	helper(char **ans, const char *str, int start, int end)
{
	char	*t;
	int		i;
	int		k;

	k = 0;
	while (ans[k])
		k++;
	t = temp(str, start, end);
	if (!t)
	{
		i = 0;
		while (i < k)
		{
			free(ans[i]);
			i++;
		}
		return (0);
	}
	ans[k] = t;
	return (1);
}

static char	**help(const char *str, char c, char **ans)
{
	int	i;
	int	t;
	int	k;

	i = -1;
	t = 0;
	while (str[++i])
	{
		if (str[i] == c)
		{
			if (t && !helper(ans, str, i - t, i))
				return (NULL);
			t = 0;
		}
		else
			t++;
	}
	if (t && !helper(ans, str, i - t, i))
		return (NULL);
	k = 0;
	while (ans[k])
		k++;
	ans[k] = NULL;
	return (ans);
}

char	**ft_split(char const *s, char c)
{
	char	**ans;
	int		words;
	char	**check;
	int		i;

	if (!s)
		return (NULL);
	words = count_words(s, c);
	ans = malloc((words + 1) * sizeof(char *));
	if (!ans)
		return (NULL);
	i = 0;
	while (i <= words)
		ans[i++] = NULL;
	check = help(s, c, ans);
	if (!check)
	{
		i = 0;
		while (ans[i])
			free(ans[i++]);
		free(ans);
		return (NULL);
	}
	return (ans);
}
