/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_max.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcreux <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 11:28:21 by jcreux            #+#    #+#             */
/*   Updated: 2018/07/13 11:43:34 by jcreux           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_max(int *tab, int length)
{
	int i;
	int max;

	i = 0;
	max = tab[0];
	while (i < length - 1)
	{
		if (tab[i] > max)
			max = tab[i];
		i++;
	}
	return (max);
}
