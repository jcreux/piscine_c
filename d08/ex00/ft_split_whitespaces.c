/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcreux <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/18 02:19:59 by jcreux            #+#    #+#             */
/*   Updated: 2018/07/19 10:12:35 by jcreux           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_count(char *str)
{
	int i;
	int	compteur;

	i = 0;
	compteur = 0;
	if (str[i] == '\0')
		return (0);
	while (str[i] != '\0')
	{
		if (str[i] != ' ' && str[i] != '\n' && str[i] != '\t' && str[i])
		{
			i++;
			while (str[i] != ' ' && str[i] != '\n' && str[i] != '\t' && str[i])
				i++;
		}
		else
		{
			i++;
			while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
				i++;
			compteur++;
		}
	}
	return (compteur + 1);
}

int		ft_l(char *str, int n)
{
	int compteur;

	compteur = 0;
	while (str[n] != ' ' && str[n] != '\n' && str[n] != '\t' && str[n] != '\0')
	{
		compteur++;
		n++;
	}
	return (compteur);
}

int		ft_next_word(char *str, int n)
{
	while ((str[n] == ' ' || str[n] == '\n' || str[n] == '\t') && str[n])
		n++;
	return (n - 1);
}

char	**ft_split_whitespaces(char *str)
{
	int		i;
	int		j;
	int		k;
	char	**tab;

	i = 0;
	k = 0;
	if (!(tab = (char**)malloc(sizeof(tab) * (ft_count(str) + 1))))
		return (NULL);
	while (str[k] != '\0')
	{
		if (str[k] != ' ' && str[k] != '\n' && str[k] != '\t' && str[k])
		{
			j = 0;
			if (!(tab[i] = (char*)malloc(sizeof(char) * (ft_l(str, k) + 1))))
				return (NULL);
			while (str[k] != ' ' && str[k] != '\n' && str[k] != '\t' && str[k])
				tab[i][j++] = str[k++];
			tab[i++][j] = '\0';
			k = ft_next_word(str, k);
		}
		k++;
	}
	tab[i] = 0;
	return (tab);
}
