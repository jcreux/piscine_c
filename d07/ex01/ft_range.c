/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcreux <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/17 16:53:00 by jcreux            #+#    #+#             */
/*   Updated: 2018/07/19 22:36:37 by jcreux           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int i;
	int diff;
	int *tab;

	i = 0;
	diff = max - min;
	if (diff <= 0)
	{
		tab = NULL;
		return (0);
	}
	else
	{
		if (!(tab = (int*)malloc(sizeof(tab) * diff + 1)))
			return (0);
		while (diff > 0)
		{
			tab[i] = min + i;
			i++;
			diff--;
		}
	}
	tab[i] = '\0';
	return (tab);
}
