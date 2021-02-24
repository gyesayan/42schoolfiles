/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyesayan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/31 20:26:50 by gyesayan          #+#    #+#             */
/*   Updated: 2021/02/08 17:09:15 by gyesayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*str;

	str = (char *)malloc(sizeof(char) * (size + 1));
	if (!str)
		return (NULL);
	size++;
	while (size--)
		str[size] = '\0';
	return (str);
}

char	*ft_itoa(int n)
{
	int		size;
	int		nbr;
	char	*str;

	size = n < 0 ? 2 : 1;
	nbr = n;
	while (nbr /= 10)
		size++;
	str = ft_strnew(size);
	if (!str)
		return (NULL);
	nbr = n;
	while (size--)
	{
		str[size] = (n < 0 ? -(n % 10) : (n % 10)) + '0';
		n /= 10;
	}
	if (nbr < 0)
		str[0] = '-';
	return (str);
}
