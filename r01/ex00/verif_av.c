/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verif_av.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbarthon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/15 14:40:41 by lbarthon          #+#    #+#             */
/*   Updated: 2018/07/15 15:14:17 by lbarthon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		verif_av(char **av)
{
	int i;
	int j;

	i = 1;
	while (i <= 9)
	{
		j = 0;
		while (av[i][j])
			j++;
		if (j != 9)
			return (0);
		i++;
	}
	return (1);
}