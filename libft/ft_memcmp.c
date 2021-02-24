/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyesayan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 04:23:47 by gyesayan          #+#    #+#             */
/*   Updated: 2021/02/08 17:12:54 by gyesayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			index;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	index = 0;
	while (index < n)
	{
		if ((str1[index] < str2[index]) || (str1[index] > str2[index]))
			return (str1[index] - str2[index]);
		++index;
	}
	return (0);
}
