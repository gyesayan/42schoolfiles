/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyesayan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 18:27:07 by gyesayan          #+#    #+#             */
/*   Updated: 2021/02/08 17:10:20 by gyesayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list *position;

	if (!lst)
		return ;
	while (*lst)
	{
		position = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = position;
	}
}
