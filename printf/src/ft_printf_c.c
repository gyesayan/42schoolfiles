/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_c.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyesayan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/03 16:21:08 by gyesayan          #+#    #+#             */
/*   Updated: 2021/07/03 16:58:23 by gyesayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_printf_c(va_list argument, t_flags *flag)
{
	int	a;
	int	count;
	int	out;

	out = 0;
	count = flag->digit - 1;
	a = va_arg(argument, int);
	if (flag->minus)
		out += ft_putchar(a);
	if (flag->digit)
		while (count--)
			out += ft_putchar(' ');
	if (!flag->minus)
		out += ft_putchar(a);
	return (out);
}

int	zero_printer_u(char zero, int spaces)
{
	int	out;

	out = 0;
	while (spaces--)
		out += ft_putchar(zero);
	return (out);
}
