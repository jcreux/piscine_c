/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unmatch.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcreux <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 13:19:31 by jcreux            #+#    #+#             */
/*   Updated: 2018/07/13 13:46:07 by jcreux           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_count(int *tab, int length, int elem)
{
	int i;
	int compteur;

	i = 0;
	compteur = 0;
	while (i < length)
	{
		if (tab[i] == elem)
			compteur++;
		i++;
	}
	if (compteur % 2 == 0)
		return (0);
	return (1);
}

int		ft_unmatch(int *tab, int length)
{
	int i;
	int res;

	i = 0;
	if (length == 1)
		return (tab[0]);
	while (tab[i] < length)
	{
		if (ft_count(tab, length, tab[i]) == 1)
			res = tab[i];
		i++;
	}
	return (res);
}
