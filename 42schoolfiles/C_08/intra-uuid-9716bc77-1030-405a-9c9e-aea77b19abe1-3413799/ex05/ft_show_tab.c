/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyesayan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/17 20:27:44 by gyesayan          #+#    #+#             */
/*   Updated: 2020/12/17 20:27:48 by gyesayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#include "ft_stock_str.h"

void				ft_put_string(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

void				ft_put_number(int number)
{
	if (number > 9)
		ft_put_number(number / 10);
	write(1, &"0123456789"[number % 10], 1);
}

void				ft_show_tab(struct s_stock_str *par)
{
	int	index;

	index = 0;
	while (par[index].str != 0)
	{
		ft_put_string(par[index].str);
		ft_put_string("\n");
		ft_put_number(par[index].size);
		ft_put_string("\n");
		ft_put_string(par[index].copy);
		ft_put_string("\n");
		index++;
	}
}