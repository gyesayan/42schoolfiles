/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyesayan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 20:07:32 by gyesayan          #+#    #+#             */
/*   Updated: 2021/02/08 17:18:10 by gyesayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *string, int sym)
{
	const char *strptr;

	strptr = string;
	while (*string)
		++string;
	if (sym == 0)
		return (char *)string;
	while (string >= strptr)
	{
		if (*string == sym)
			return ((char *)string);
		--string;
	}
	return (NULL);
}
