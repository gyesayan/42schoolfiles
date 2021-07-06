/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_s.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyesayan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/03 16:24:04 by gyesayan          #+#    #+#             */
/*   Updated: 2021/07/03 17:09:23 by gyesayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_printf_s(va_list argument, t_flags *flag)
{
	int		out;
	char	*str;
	int		i;
	int		spaces;

	out = 0;
	i = -1;
	str = va_arg(argument, char *);
	if (str == NULL)
		str = "(null)";
	flag->dot = dot_setter(flag, str);
	spaces = flag->digit - flag->dot;
	if (flag->digit && spaces > 0 && !flag->minus)
		out += space_printer(spaces);
	if (flag->dot > 0)
		while (flag->dot-- && str[++i])
			out += ft_putchar(str[i]);
	if (flag->minus && flag->digit && spaces > 0)
		while (spaces--)
			out += ft_putchar(' ');
	if (flag->dot == 0)
		return (out);
	return (out);
}

int	dot_setter(t_flags *flag, char *str)
{
	if (flag->dot > ft_strlen(str) || flag->dot == -1)
		return (ft_strlen(str));
	return (flag->dot);
}
