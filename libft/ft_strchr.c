/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyesayan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 21:15:37 by gyesayan          #+#    #+#             */
/*   Updated: 2021/02/08 17:15:27 by gyesayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *string, int sym)
{
	while (*string != '\0' && *string != sym)
		++string;
	if (*string == sym)
		return ((char *)string);
	return (NULL);
}
