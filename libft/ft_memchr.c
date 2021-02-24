/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyesayan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 05:13:27 by gyesayan          #+#    #+#             */
/*   Updated: 2021/02/08 17:12:38 by gyesayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*string;
	unsigned char	ch;
	size_t			ind;

	string = (unsigned char *)s;
	ch = (unsigned char)c;
	ind = 0;
	while (ind < n)
	{
		if (*string == ch)
			return (string);
		++ind;
		++string;
	}
	return (0);
}
