/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyesayan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 06:52:36 by gyesayan          #+#    #+#             */
/*   Updated: 2021/02/08 17:06:33 by gyesayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		is_it_space(char space)
{
	return (space == '\t' || space == '\n' || space == '\r' ||
			space == '\f' || space == '\v' || space == ' ');
}

int		ft_atoi(const char *str)
{
	long int	result;
	int			sign;

	sign = 1;
	result = 0;
	while (is_it_space(*str))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
		result = result * 10 + *(str++) - '0';
	return (sign * result);
}
