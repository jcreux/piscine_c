/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unique.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbarthon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/15 09:59:35 by lbarthon          #+#    #+#             */
/*   Updated: 2018/07/15 13:56:51 by lbarthon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		sup_17(char **tab)
{
	int n;
	int i;
	int j;

	n = 0;
	i = 0;
	while (tab[i])
	{
		j = 0;
		while (tab[i][j])
		{
			if (tab[i][j] != '.')
				n++;
			j++;
		}
		i++;
	}
	if (n < 17)
		return (0);
	return (1);
}
