/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyesayan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/12 21:33:57 by gyesayan          #+#    #+#             */
/*   Updated: 2020/12/13 16:23:05 by gyesayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int a;
	unsigned int b;

	b = 0;
	while (dest[b] != '\0' && b < size)
		b++;
	a = 0;
	while (src[a])
	{
		if (a + b + 1 < size)
			dest[b + a] = src[a];
		a++;
	}
	dest[b + a] = '\0';
	return (b + a);
}
