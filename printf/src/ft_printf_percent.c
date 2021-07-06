/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_percent.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyesayan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/03 16:22:09 by gyesayan          #+#    #+#             */
/*   Updated: 2021/07/03 17:08:46 by gyesayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	ft_flag_star(va_list argument, t_flags *flag)
{
	int	a;

	a = va_arg(argument, int);
	if (a < 0 && flag->zero == 1)
	{
		flag->minus = 1;
		flag->zero = 0;
		a = -a;
	}
	else if (a < 0)
	{
		flag->minus = 1;
		a = -a;
	}
	if (flag->dot == -1)
		flag->digit = a;
	else
		flag->dot = a;
}

int	ft_printf_percent(t_flags *flag)
{
	int		out;
	int		spaces;
	char	zero;

	out = 0;
	zero = ' ';
	spaces = flag->digit - 1;
	if (flag->zero)
		zero = '0';
	if (flag->digit && spaces > 0 && !flag->minus)
		while (spaces--)
			out += ft_putchar(zero);
	out += ft_putchar('%');
	if (flag->digit && spaces > 0 && flag->minus)
		while (spaces--)
			out += ft_putchar(' ');
	return (out);
}

int	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (*(s + i))
		++i;
	return (i);
}
