/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbarthon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/14 18:13:35 by lbarthon          #+#    #+#             */
/*   Updated: 2018/07/15 09:21:29 by lbarthon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_print_tab(char **tab)
{
	int i;
	int n;

	i = 0;
	while (tab[i])
	{
		n = 0;
		while (tab[i][n])
		{
			ft_putchar(tab[i][n]);
			n++;
			if (tab[i][n])
				ft_putchar(' ');
			else
				ft_putchar('\n');
		}
		i++;
	}
}
