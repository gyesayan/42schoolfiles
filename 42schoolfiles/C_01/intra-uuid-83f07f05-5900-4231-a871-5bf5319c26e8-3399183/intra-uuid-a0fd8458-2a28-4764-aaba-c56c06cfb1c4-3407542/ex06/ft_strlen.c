/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyesayan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 19:29:19 by gyesayan          #+#    #+#             */
/*   Updated: 2020/12/10 20:52:50 by gyesayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_strlen(char *str)
{
	int l;

	l = 0;
	while (str[l] != '\0')
	{
		l++;
	}
	return (l);
}
