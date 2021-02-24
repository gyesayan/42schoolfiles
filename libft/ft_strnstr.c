/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyesayan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 14:41:09 by gyesayan          #+#    #+#             */
/*   Updated: 2021/02/08 17:17:53 by gyesayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t length)
{
	size_t hindex;
	size_t nindex;

	if (*needle == '\0')
		return ((char *)haystack);
	hindex = 0;
	while (haystack[hindex] != '\0')
	{
		nindex = 0;
		while (needle[nindex] != '\0' && (hindex + nindex < length))
		{
			if (haystack[hindex + nindex] == needle[nindex])
				++nindex;
			else
				break ;
		}
		if (needle[nindex] == '\0')
			return ((char *)(haystack + hindex));
		++hindex;
	}
	return (NULL);
}
