/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralrawaj <ralrawaj@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 15:57:07 by ralrawaj          #+#    #+#             */
/*   Updated: 2025/12/21 18:44:23 by ralrawaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	ch;
	char			*str;
	int				i;

	ch = (unsigned char)c;
	str = (char *)s;
	i = 0;
	while (str[i])
	{
		if (str[i] == ch)
			return (str + i);
		i++;
	}
	if (str[i] == ch)
		return (str + i);
	return (NULL);
}
