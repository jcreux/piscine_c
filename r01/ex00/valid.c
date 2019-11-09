/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbarthon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/14 21:48:39 by lbarthon          #+#    #+#             */
/*   Updated: 2018/07/15 11:49:41 by lbarthon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		can_put_int(char **tab, char k, int lig, int col)
{
	int i;
	int n;

	i = 0;
	while (i < 9)
	{
		if (tab[lig][i] == k)
			return (0);
		if (tab[i][col] == k)
			return (0);
		i++;
	}
	i = 0;
	while (i < 3)
	{
		n = 0;
		while (n < 3)
		{
			if (tab[lig - lig % 3 + i][col - col % 3 + n] == k)
				return (0);
			n++;
		}
		i++;
	}
	return (1);
}
