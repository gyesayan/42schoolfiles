/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyesayan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/30 13:41:14 by gyesayan          #+#    #+#             */
/*   Updated: 2021/02/08 17:18:47 by gyesayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char			*substr;
	unsigned int	i;

	substr = (char *)malloc(sizeof(*s) * (len + 1));
	if (!s || !substr)
		return (NULL);
	i = 0;
	while (start < ft_strlen((char *)s) && s[start + i] && i < len)
	{
		substr[i] = s[start + i];
		++i;
	}
	substr[i] = '\0';
	return (substr);
}
