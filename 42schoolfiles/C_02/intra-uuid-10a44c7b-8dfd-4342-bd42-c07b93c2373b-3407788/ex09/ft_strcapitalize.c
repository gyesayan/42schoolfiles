/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyesayan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 17:17:11 by gyesayan          #+#    #+#             */
/*   Updated: 2020/12/09 21:15:18 by gyesayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	unsigned int a;

	if (str[0] != '\0' && str[0] >= 'a' && str[0] <= 'z')
		str[0] = str[0] - 32;
	a = 1;
	while (str[a] != '\0')
	{
		if (((str[a] >= 'a' && str[a] <= 'z') ||
				(str[a] >= 'A' && str[a] <= 'Z')) && (str[a - 1] < '0' ||
				(str[a - 1] > '9' && str[a - 1] < 'A') ||
				(str[a - 1] > 'Z' && str[a - 1] < 'a') ||
				str[a - 1] > 'z'))
		{
			if (str[a] >= 'a' && str[a] <= 'z')
				str[a] = str[a] - 32;
		}
		else if (str[a] >= 'A' && str[a] <= 'Z')
			str[a] = str[a] + 32;
		a++;
	}
	return (str);
}
