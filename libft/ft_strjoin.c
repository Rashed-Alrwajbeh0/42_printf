/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralrawaj <ralrawaj@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/07 12:08:27 by ralrawaj          #+#    #+#             */
/*   Updated: 2025/12/07 12:08:29 by ralrawaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	len(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ans;
	size_t	num1;
	size_t	num2;
	size_t	i;

	num1 = len(s1);
	num2 = len(s2);
	i = 0;
	ans = malloc(num1 + num2 + 1);
	if (ans == NULL)
		return (NULL);
	while (i++ < num1)
		ans[i - 1] = s1[i - 1];
	i = 0;
	while (i++ < num2)
		ans[i + num1 - 1] = s2[i - 1];
	ans[num2 + num1] = '\0';
	return (ans);
}
