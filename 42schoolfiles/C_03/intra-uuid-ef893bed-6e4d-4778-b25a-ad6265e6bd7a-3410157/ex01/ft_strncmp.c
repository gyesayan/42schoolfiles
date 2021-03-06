/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyesayan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/12 16:22:50 by gyesayan          #+#    #+#             */
/*   Updated: 2020/12/12 16:37:05 by gyesayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int a;

	a = 0;
	while ((s1[a] != '\0' || s2[a] != '\0') && (a < n))
	{
		if (s1[a] < s2[a])
		{
			return (-1);
		}
		if (s1[a] > s2[a])
		{
			return (1);
		}
		a++;
	}
	return (0);
}
