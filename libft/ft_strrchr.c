/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralrawaj <ralrawaj@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 10:19:59 by ralrawaj          #+#    #+#             */
/*   Updated: 2025/12/21 18:44:50 by ralrawaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *ss, int c)
{
	char			*str;
	char			*s;
	int				i;
	unsigned char	ch;

	str = (char *)ss;
	ch = (unsigned char)c;
	s = NULL;
	i = 0;
	while (str[i])
	{
		if (str[i] == ch)
			s = str + i;
		i++;
	}
	if (str[i] == ch)
		return (str + i);
	return (s);
}
