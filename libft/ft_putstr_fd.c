/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralrawaj <ralrawaj@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 15:00:04 by ralrawaj          #+#    #+#             */
/*   Updated: 2025/12/15 15:00:05 by ralrawaj         ###   ########.fr       */
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

void	ft_putstr_fd(char *s, int fd)
{
	write (fd, s, len(s));
}
