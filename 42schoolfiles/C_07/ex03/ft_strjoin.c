/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyesayan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/17 19:53:56 by gyesayan          #+#    #+#             */
/*   Updated: 2020/12/17 20:12:30 by gyesayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcat(char *dest, char *src, char *sep)
{
	int a;
	int b;

	a = 0;
	b = 0;
	while (dest[a])
		a++;
	while (src[b])
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	b = 0;
	while (sep[b])
	{
		dest[a] = sep[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}

int		ft_l(char *str)
{
	int a;

	a = 0;
	while (*str)
	{
		str++;
		a++;
	}
	return (0);
}

int		ft_strlen(int size, char **strs)
{
	int letter;
	int a;
	int b;

	letter = 1;
	a = 0;
	while (a < size)
	{
		b = 0;
		while (strs[b])
		{
			letter++;
			b++;
		}
		a++;
	}
	return (letter);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*join;
	int		len;
	int		a;

	if (size == 0)
	{
		join = (char *)malloc(sizeof(char));
		return (join);
	}
	len = ft_strlen(size, strs);
	join = (char *)malloc((len + (size - 1) * ft_l(sep)) * sizeof(char *) + 1);
	if (!join)
		return (NULL);
	join[0] = '\0';
	a = 0;
	while (a < size)
	{
		if (a == size - 1)
			join = ft_strcat(join, strs[a], "\0");
		else
			join = ft_strcat(join, strs[a], sep);
		a++;
	}
	return (join);
}
