/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyesayan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 00:08:23 by gyesayan          #+#    #+#             */
/*   Updated: 2021/02/08 17:16:50 by gyesayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t a;
	size_t b;

	a = 0;
	b = 0;
	if (!src)
		return (0);
	while (src[a] != '\0')
		++a;
	if (size != 0)
	{
		while (src[b] != '\0' && b < (size - 1))
		{
			dest[b] = src[b];
			++b;
		}
		dest[b] = '\0';
	}
	return (a);
}
