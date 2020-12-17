/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyesayan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/12 21:19:57 by gyesayan          #+#    #+#             */
/*   Updated: 2020/12/12 21:28:22 by gyesayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int a;
	int b;

	if (to_find[0] == '\0')
		return (str);
	a = 0;
	while (str[a] != '\0')
	{
		b = 0;
		while (to_find[b] != '\0')
		{
			if (str[a + b] == to_find[b])
			{
				b++;
			}
			else
				break ;
		}
		if (to_find[b] == '\0')
		{
			return (str + a);
		}
		a++;
	}
	return (0);
}
