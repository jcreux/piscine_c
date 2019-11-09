/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_wordtab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcreux <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/24 10:00:31 by jcreux            #+#    #+#             */
/*   Updated: 2018/07/24 10:56:45 by jcreux           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *a1, char *a2)
{
	int i;
	int diff;

	i = 0;
	diff = 0;
	while (a1[i] == a2[i] && a1[i] != '\0' && a2[i] != '\0')
	{
		i++;
	}
	diff = a1[i] - a2[i];
	return (diff);
}

void	ft_sort_wordtab(char **tab)
{
	int		i;
	char	*str;

	i = 0;
	while (tab[i + 1])
	{
		if (ft_strcmp(tab[i], tab[i + 1]) > 0)
		{
			str = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = str;
			i = 0;
		}
		else
			i++;
	}
}
