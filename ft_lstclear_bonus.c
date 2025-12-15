/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabad-di <jabad-di@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 18:34:16 by dipekko           #+#    #+#             */
/*   Updated: 2025/12/01 19:53:57 by jabad-di         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp;
	t_list	*tmpnext;

	if (!lst)
		return ;
	tmp = *lst;
	while (tmp)
	{
		tmpnext = tmp->next;
		(del)(tmp->content);
		free (tmp);
		tmp = tmpnext;
	}
	*lst = NULL;
}
