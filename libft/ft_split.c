/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyesayan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 16:05:33 by gyesayan          #+#    #+#             */
/*   Updated: 2021/02/08 17:15:09 by gyesayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_word_counter(char const *s, char c)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			count++;
		++i;
	}
	return (count);
}

static int	ft_length_counter(char const *s, char c)
{
	int i;

	i = 0;
	while (s[i] != c && s[i] != '\0')
		++i;
	return (i);
}

static char	**ft_matrix(char const *s, char c, char **result, int w_count)
{
	int i;
	int j;
	int length;

	while (*s == c)
		++s;
	i = -1;
	while (++i < w_count)
	{
		while (*s == c)
			++s;
		j = 0;
		length = ft_length_counter(s, c);
		if (!(result[i] = (char *)malloc(sizeof(char *) * (length + 1))))
			return (NULL);
		while (j < length)
		{
			result[i][j] = *s;
			++s;
			++j;
		}
		result[i][j] = '\0';
	}
	result[i] = NULL;
	return (result);
}

char		**ft_split(const char *s, char c)
{
	char	**result;
	int		wcount;

	if (!s)
		return (NULL);
	wcount = ft_word_counter(s, c);
	if (!(result = (char **)malloc(sizeof(char *) * (wcount + 1))))
		return (NULL);
	result = ft_matrix(s, c, result, wcount);
	return (result);
}
