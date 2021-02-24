/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyesayan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 12:52:27 by gyesayan          #+#    #+#             */
/*   Updated: 2021/02/08 17:07:18 by gyesayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t			volume;
	void			*block;

	volume = count * size;
	if (!(block = (void *)malloc(volume)))
		return (NULL);
	ft_bzero(block, volume);
	return (block);
}
