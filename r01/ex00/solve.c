/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbarthon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/14 22:16:36 by lbarthon          #+#    #+#             */
/*   Updated: 2018/07/15 12:04:56 by lbarthon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		can_put_int(char **tab, char k, int lig, int col);

int		solve(char **tab, int value)
{
	int x;
	int y;
	int i;

	x = value / 9;
	y = value % 9;
	i = 1;
	if (value > 80)
		return (1);
	if (tab[x][y] != '.')
		return (solve(tab, value + 1));
	while (i < 10)
	{
		if (can_put_int(tab, i + '0', x, y) == 1)
		{
			tab[x][y] = i + '0';
			if (solve(tab, value + 1))
				return (1);
			else
				tab[x][y] = '.';
		}
		i++;
	}
	return (0);
}
