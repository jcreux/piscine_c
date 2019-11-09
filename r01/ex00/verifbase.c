/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verifbaseb.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scadilha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/15 12:18:28 by scadilha          #+#    #+#             */
/*   Updated: 2018/07/15 18:08:55 by lbarthon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		get_bloc_pos(int nb, int i)
{
	return (nb - nb % 3 + i);
}

int		check_bloc(char **tab, char k, int lig, int col)
{
	int	i;
	int	n;
	int	c;

	c = 0;
	i = 0;
	while (i < 3)
	{
		n = 0;
		while (n < 3)
		{
			if (tab[get_bloc_pos(lig, i)][get_bloc_pos(col, n)] == k)
			{
				c++;
				if (c > 1)
					return (0);
			}
			n++;
		}
		i++;
	}
	return (1);
}

int		verifbaseb(char **tab)
{
	int	y;
	int	x;

	y = 0;
	while (y < 9)
	{
		x = 0;
		while (x < 9)
		{
			if (tab[x][y] != '.')
			{
				if (check_bloc(tab, tab[x][y], x, y) == 0)
					return (0);
			}
			x++;
		}
		y++;
	}
	return (1);
}

int		verif(char **tab, int x, int y)
{
	int	a;
	int	b;
	int	c;

	c = 0;
	a = 0;
	while (a < 9)
	{
		if (tab[x][y] == tab[a++][y])
			c++;
	}
	b = 0;
	c = 0;
	while (b < 9)
	{
		if (tab[x][y] == tab[x][b++])
			c++;
	}
	return (c);
}

int		verifbaselc(char **tab)
{
	int	x;
	int	y;

	y = 0;
	while (y < 9)
	{
		x = 0;
		while (x < 9)
		{
			if (tab[x][y] != '.')
			{
				if (verif(tab, x, y) > 1)
					return (0);
			}
			x++;
		}
		y++;
	}
	return (1);
}
