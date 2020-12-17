/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyesayan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/17 18:31:32 by gyesayan          #+#    #+#             */
/*   Updated: 2020/12/17 19:42:25 by gyesayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int a;
	int *range;

	if (min >= max)
		return (0);
	range = malloc(sizeof(int) * (max - min));
	a = 0;
	while (min < max)
	{
		range[a] = min;
		a++;
		min++;
	}
	return (range);
}
