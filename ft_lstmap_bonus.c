/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabad-di <jabad-di@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 11:36:21 by dipekko           #+#    #+#             */
/*   Updated: 2025/12/01 19:55:00 by jabad-di         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	clear(t_list **lst, void (*del)(void*), void *tmp)
{
	free(tmp);
	ft_lstclear(lst, del);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_nodo;
	void	*tmp;

	if (!lst || !f)
		return (NULL);
	new_list = NULL;
	while (lst)
	{
		tmp = f(lst->content);
		if (!tmp)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		new_nodo = ft_lstnew(tmp);
		if (!new_nodo)
		{
			clear(&new_list, del, tmp);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_nodo);
		lst = lst->next;
	}
	return (new_list);
}
