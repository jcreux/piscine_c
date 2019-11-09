/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_generic.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcreux <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 15:54:56 by jcreux            #+#    #+#             */
/*   Updated: 2018/07/13 15:56:10 by jcreux           ###   ########.fr       */
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
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_generic(void)
{
	int i;

	i = 0;
	while (i < 4)
	{
		if (i == 2)
		{
			ft_putchar(';');
			ft_putchar(' ');
		}
		if (i == 0 || i == 2)
			ft_putstr("Tut ");
		else if (i == 1)
			ft_putstr("tut ");
		else
			ft_putstr("tut");
		i++;
	}
	ft_putchar('\n');
}
