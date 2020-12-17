/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyesayan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/16 22:42:55 by gyesayan          #+#    #+#             */
/*   Updated: 2020/12/16 23:13:50 by gyesayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int global t[10] = {-1};
int global sol = 1;

int		abs(int a)
{
	if (a < 0)
		return (a * -1);
	else
		return (a);
}

int		empty(int i)
{
	int j;

	j = 0;
	while ((t[i] != t[j]) && (abs(t[i] - t[j]) != (i - j)) && j < 10)
		j++;
	return (i == j ? 1 : 0);
}

void	queens(int i, int *a)
{
	t[i] = 0;
	while (t[i] < 10)
	{
		if (empty(i))
		{
			if (i == 9)
			{
				(*a)++;
				++sol;
			}
			else
				queens(i + 1, a);
		}
		t[i]++;
	}
}

int		ft_ten_queens_puzzle(void)
{
	int i;

	i = 0;
	queens(0, &i);
	return (i);
}
