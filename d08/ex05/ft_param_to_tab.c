/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcreux <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/22 05:58:00 by jcreux            #+#    #+#             */
/*   Updated: 2018/07/22 22:00:54 by jcreux           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_par.h"

int					ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char				*ft_cpy(char *src)
{
	int		i;
	char	*dest;

	i = 0;
	if (!(dest = malloc(sizeof(char) * ft_strlen(src) + 1)))
		return (NULL);
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

struct s_stock_par	*ft_param_to_tab(int ac, char **av)
{
	int			i;
	t_stock_par	s;
	t_stock_par *tab2;

	i = 0;
	if (!(tab2 = malloc(sizeof(t_stock_par) * (ac + 1))))
		return (NULL);
	while (i < ac)
	{
		s.size_param = ft_strlen(av[i]);
		s.str = av[i];
		s.copy = ft_cpy(av[i]);
		s.tab = ft_split_whitespaces(av[i]);
		tab2[i] = s;
		i++;
	}
	s.str = 0;
	tab2[i] = s;
	return (tab2);
}
