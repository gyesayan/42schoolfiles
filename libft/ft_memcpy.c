/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyesayan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 22:21:18 by gyesayan          #+#    #+#             */
/*   Updated: 2021/02/08 17:24:44 by gyesayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *source, size_t length)
{
	const char	*ss;
	char		*dd;
	size_t		index;

	ss = (char *)source;
	dd = (char *)dest;
	if (dest == source || !length)
		return (dest);
	index = 0;
	while (index < length)
	{
		dd[index] = ss[index];
		index++;
	}
	return (dest);
}
