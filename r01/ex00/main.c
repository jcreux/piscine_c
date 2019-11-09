/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbarthon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/14 18:07:33 by lbarthon          #+#    #+#             */
/*   Updated: 2018/07/15 18:08:56 by lbarthon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_putstr(char *str);
void	ft_putchar(char c);
void	ft_print_tab(char **tab);
int		solve(char **tab, int value);
int		sup_17(char **tab);
int		verifbaselc(char **tab);
int		verifbaseb(char **tab);
int		verif_av(char **av);

char	**ft_createtab(char **av)
{
	char	**tab;
	int		i;

	i = 0;
	tab = (char**)malloc(sizeof(char) * 10);
	while (i < 9)
	{
		tab[i] = (char*)malloc(sizeof(char) * 10);
		tab[i] = av[i + 1];
		i++;
	}
	tab[i] = 0;
	return (tab);
}

int		main(int ac, char **av)
{
	char **tab;

	if (ac != 10)
	{
		ft_putstr("Error\n");
		return (0);
	}
	tab = ft_createtab(av);
	if (sup_17(tab) == 0 || verifbaseb(tab) == 0 || verifbaselc(tab) == 0
			|| verif_av(av) == 0)
	{
		free(tab);
		ft_putstr("Error\n");
		return (0);
	}
	if (solve(tab, 0))
		ft_print_tab(tab);
	else
		ft_putstr("Error\n");
	free(tab);
	return (0);
}
