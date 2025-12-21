/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralrawaj <ralrawaj@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 15:03:50 by ralrawaj          #+#    #+#             */
/*   Updated: 2025/12/15 15:03:51 by ralrawaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*temp;
	int		counter;

	if (lst == NULL)
		return (0);
	counter = 1;
	temp = lst->next;
	while (temp != NULL)
	{
		temp = temp->next;
		counter++;
	}
	return (counter);
}
