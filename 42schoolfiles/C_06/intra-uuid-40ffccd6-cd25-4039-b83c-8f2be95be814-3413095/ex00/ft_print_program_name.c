/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyesayan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/16 23:40:49 by gyesayan          #+#    #+#             */
/*   Updated: 2020/12/17 01:24:20 by gyesayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char **argv)
{
	int a;

	a = 0;
	argc = 0;
	while (argv[0][a])
	{
		ft_putchar(argv[0][a]);
		a++;
	}
	ft_putchar('\n');
	return (0);
}
