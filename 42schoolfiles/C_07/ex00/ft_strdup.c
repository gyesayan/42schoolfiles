/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyesayan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/17 18:20:28 by gyesayan          #+#    #+#             */
/*   Updated: 2020/12/17 18:30:55 by gyesayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char	*ft_strdup(char *src)
{
	char	*copy;
	int		a;

	copy = malloc(sizeof(*src));
	if (copy == NULL)
		return (NULL);
	a = 0;
	while (src[a] != '\0')
	{
		copy[a] = src[a];
		a++;
	}
	copy[a] = '\0';
	return (copy);
}
