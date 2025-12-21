/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralrawaj <ralrawaj@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 14:59:58 by ralrawaj          #+#    #+#             */
/*   Updated: 2025/12/15 14:59:59 by ralrawaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	len(char *str)
{
	int	ans;

	ans = -1;
	while (str[++ans])
		;
	return (ans);
}

void	ft_putendl_fd(char *s, int fd)
{
	write (fd, s, len(s));
	write (fd, "\n", 1);
}
