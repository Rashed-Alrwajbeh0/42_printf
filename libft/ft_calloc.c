/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralrawaj <ralrawaj@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/07 12:08:03 by ralrawaj          #+#    #+#             */
/*   Updated: 2025/12/07 12:08:05 by ralrawaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t element_num, size_t size_in_byte)
{
	void	*ans;

	ans = malloc(element_num * size_in_byte);
	if (ans == NULL)
		return (NULL);
	ft_bzero(ans, element_num * size_in_byte);
	return (ans);
}
