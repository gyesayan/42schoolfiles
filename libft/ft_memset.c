/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyesayan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 19:26:57 by gyesayan          #+#    #+#             */
/*   Updated: 2021/02/08 17:13:29 by gyesayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *string, int character, size_t length)
{
	unsigned char	value;
	unsigned char	*strptr;

	value = (unsigned char)character;
	strptr = (unsigned char*)string;
	while (length--)
	{
		*strptr = value;
		++strptr;
	}
	return (string);
}
