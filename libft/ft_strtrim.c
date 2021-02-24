/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyesayan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/30 18:30:54 by gyesayan          #+#    #+#             */
/*   Updated: 2021/02/08 17:18:29 by gyesayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s1, const char *set)
{
	size_t size_s1;

	if (!s1 || !set)
		return (0);
	while (*s1 && ft_strchr(set, *s1))
		++s1;
	size_s1 = ft_strlen(s1);
	while (size_s1 && ft_strchr(set, s1[size_s1]))
		--size_s1;
	return (ft_substr(s1, 0, size_s1 + 1));
}
