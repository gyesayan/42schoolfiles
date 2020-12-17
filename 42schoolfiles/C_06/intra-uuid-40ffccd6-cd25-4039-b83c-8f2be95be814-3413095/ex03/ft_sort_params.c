/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort-params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyesayan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/17 01:51:34 by gyesayan          #+#    #+#             */
/*   Updated: 2020/12/17 02:04:21 by gyesayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_strcmp(char *s1, char *s2)
{
	int a;

	a = 0;
	while (s1[a] != '\0' || s2[a] != '\0')
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

void	sort(int argc, char **argv)
{
	int		a;
	int		b;
	char	*t;

	a = 1;
	while (a < argc - 1)
	{
		b = a + 1;
		while (b < argc)
		{
			if (ft_strcmp(argv[a], argv[b]) > 0)
			{
				t = argv[a];
				argv[a] = argv[b];
				argv[b] = t;
			}
			b++;
		}
		a++;
	}
}

int		main(int argc, char **argv)
{
	int a;
	int b;

	sort(argc, argv);
	a = 1;
	while (a < argc)
	{
		b = 0;
		while (argv[a][b])
		{
			ft_putchar(argv[a][b]);
			b++;
		}
		ft_putchar('\n');
		a++;
	}
}
