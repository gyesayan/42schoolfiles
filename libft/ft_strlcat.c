/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyesayan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 01:41:40 by gyesayan          #+#    #+#             */
/*   Updated: 2021/02/08 17:16:35 by gyesayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, char *src, size_t size)
{
	unsigned int	destsize;
	unsigned int	srcsize;
	int				len;

	destsize = ft_strlen(dest);
	srcsize = ft_strlen(src);
	len = size - 1 - destsize;
	if (size <= destsize)
		return (size + srcsize);
	while (*dest)
		dest++;
	while (*src && len)
	{
		*dest++ = *src++;
		len--;
	}
	*dest = '\0';
	return (destsize + srcsize);
}
