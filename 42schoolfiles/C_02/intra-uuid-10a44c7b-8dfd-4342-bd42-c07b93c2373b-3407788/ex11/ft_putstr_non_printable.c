/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyesayan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 22:37:20 by gyesayan          #+#    #+#             */
/*   Updated: 2020/12/10 14:38:18 by gyesayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>
#include <unistd.h>

void	ft_putchar(char s)
{
	write(1, &s, 1);
}

bool	is_char_printable(char s)
{
	return (s >= ' ' && s != 127);
}

void	ft_putstr_non_printable(char *str)
{
	int				a;
	unsigned char	c;

	a = 0;
	while (true)
	{
		c = str[a];
		if (c == '\0')
			break ;
		if (is_char_printable(c))
			ft_putchar(c);
		else
		{
			ft_putchar('\\');
			ft_putchar("0123456789abcdef"[c / 16]);
			ft_putchar("0123456789abcdef"[c % 16]);
		}
		a++;
	}
}
