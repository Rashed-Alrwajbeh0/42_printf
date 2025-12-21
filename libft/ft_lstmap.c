/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralrawaj <ralrawaj@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 17:41:22 by ralrawaj          #+#    #+#             */
/*   Updated: 2025/12/15 17:41:23 by ralrawaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static t_list	*s(t_list **lst, t_list **head, void *(*f)(void *),
		void (*del)(void *))
{
	void	*con;
	t_list	*help;

	while (*lst)
	{
		con = f((*lst)->content);
		if (!con)
		{
			ft_lstclear(head, del);
			return (NULL);
		}
		help = ft_lstnew(con);
		if (!help)
		{
			del(con);
			ft_lstclear(head, del);
			return (NULL);
		}
		ft_lstadd_back(head, help);
		*lst = (*lst)->next;
	}
	return (*head);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	void	*con;

	if (!lst || !f)
		return (NULL);
	con = f(lst->content);
	if (!con)
		return (NULL);
	head = ft_lstnew(con);
	if (!head)
	{
		del(con);
		return (NULL);
	}
	lst = lst->next;
	if (s(&lst, &head, f, del) == NULL)
		return (NULL);
	return (head);
}
