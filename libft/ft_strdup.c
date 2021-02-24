/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyesayan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 14:11:10 by gyesayan          #+#    #+#             */
/*   Updated: 2021/02/08 17:15:50 by gyesayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	int		index;
	char	*string;

	string = (char *)malloc(ft_strlen(str) + 1);
	if (!string)
		return (0);
	index = 0;
	while (str[index])
	{
		string[index] = str[index];
		++index;
	}
	string[index] = '\0';
	return (string);
}
