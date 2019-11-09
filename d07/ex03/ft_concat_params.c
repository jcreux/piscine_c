/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcreux <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/18 00:51:10 by jcreux            #+#    #+#             */
/*   Updated: 2018/07/19 10:35:48 by jcreux           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_count(int argc, char **argv)
{
	int i;
	int j;
	int	compteur;

	i = 1;
	j = 0;
	compteur = 0;
	while (i < argc)
	{
		while (argv[i][j] != '\0')
		{
			compteur++;
			j++;
		}
		j = 0;
		i++;
	}
	return (compteur);
}

char	*ft_concat_params(int argc, char **argv)
{
	char	*str;
	int		i;
	int		j;
	int		compteur;

	i = 0;
	j = 0;
	compteur = 0;
	str = (char*)malloc(sizeof(*str) * (ft_count(argc, argv) + (argc - 1)));
	while (++i < argc)
	{
		while (argv[i][j])
		{
			str[compteur] = argv[i][j++];
			compteur++;
		}
		j = 0;
		if (i != argc - 1)
		{
			str[compteur] = '\n';
			compteur++;
		}
	}
	str[compteur] = '\0';
	return (str);
}
