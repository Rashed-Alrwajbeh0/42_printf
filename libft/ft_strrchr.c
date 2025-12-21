/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralrawaj <ralrawaj@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 10:19:59 by ralrawaj          #+#    #+#             */
/*   Updated: 2025/12/01 10:20:00 by ralrawaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *ss, int c)
{
	char	*s;
	char	*str;
	int		i;

	i = -1;
	str = (char *)ss;
	s = NULL;
	while (str[++i])
		if (str[i] == c)
			s = str + i;
	if (!str[i] && !c)
		return (str + i);
	return (s);
}
