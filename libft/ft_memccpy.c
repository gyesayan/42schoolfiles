/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyesayan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 23:05:08 by gyesayan          #+#    #+#             */
/*   Updated: 2021/02/08 17:12:22 by gyesayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *destin, const void *source, int sym, size_t length)
{
	const char		*src;
	unsigned char	*dest;
	unsigned char	s;
	size_t			ind;

	src = (const char *)source;
	dest = (unsigned char *)destin;
	s = (unsigned char)sym;
	ind = 0;
	while (ind < length)
	{
		dest[ind] = src[ind];
		if (dest[ind] == s)
			return ((void *)(dest + ind + 1));
		++ind;
	}
	return (NULL);
}
