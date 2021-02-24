/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyesayan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 19:07:22 by gyesayan          #+#    #+#             */
/*   Updated: 2021/02/08 17:11:28 by gyesayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *new_lst;
	t_list *position_new;
	t_list *position_old;

	if (!lst || !(new_lst = ft_lstnew((*f)(lst->content))))
		return (NULL);
	position_new = new_lst;
	position_old = lst->next;
	while (position_old)
	{
		if (!(position_new->next = ft_lstnew((*f)(position_old->content))))
		{
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		position_new = position_new->next;
		position_old = position_old->next;
	}
	return (new_lst);
}
