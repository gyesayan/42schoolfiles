/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyesayan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/27 16:47:06 by gyesayan          #+#    #+#             */
/*   Updated: 2021/05/02 23:21:43 by gyesayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_line_to_get(char *src)
{
	int		index;
	char	*next_line;

	index = 0;
	while (src && src[index] && src[index] != '\n')
		++index;
	if (!(next_line = malloc((index + 1))))
		return (NULL);
	index = 0;
	while (src && src[index] && src[index] != '\n')
	{
		next_line[index] = src[index];
		++index;
	}
	next_line[index] = '\0';
	return (next_line);
}

char	*ft_remainder_part(char *source)
{
	char	*array;
	size_t	length;
	int		i;
	int		j;

	i = 0;
	if (!source)
		return (NULL);
	while (source[i] && source[i] != '\n')
		++i;
	if (!source[i])
	{
		free(source);
		return (NULL);
	}
	length = ft_strlen(source) - i;
	if (!(array = malloc(sizeof(char) * (length + 1))))
		return (NULL);
	++i;
	j = 0;
	while (source[i])
		array[j++] = source[i++];
	array[j] = '\0';
	free(source);
	return (array);
}

int		get_next_line(int fd, char **line)
{
	int			bytes_were_read;
	char		*buf;
	static char	*src[80000];

	if (fd < 0 || !line || BUFFER_SIZE <= 0)
		return (-1);
	if (!(buf = malloc(BUFFER_SIZE + 1)))
		return (-1);
	while ((bytes_were_read = read(fd, buf, BUFFER_SIZE)) > 0)
	{
		buf[bytes_were_read] = '\0';
		src[fd] = ft_strjoin(src[fd], buf);
		if (ft_strchr(src[fd], '\n') || ft_strchr(src[fd], '\0'))
			break ;
	}
	free(buf);
	if (bytes_were_read < 0)
		return (-1);
	*line = ft_line_to_get(src[fd]);
	src[fd] = ft_remainder_part(src[fd]);
	if (!bytes_were_read && !src[fd])
		return (0);
	return (1);
}
