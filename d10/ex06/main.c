/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcreux <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/24 04:16:10 by jcreux            #+#    #+#             */
/*   Updated: 2018/07/25 05:41:56 by jcreux           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_oper.h"

int		ft_op(char *str)
{
	if ((str[0] == '+' || str[0] == '-' || str[0] == '*'
				|| str[0] == '/' || str[0] == '%') && str[1] == '\0')
		return (1);
	return (0);
}

int		ft_is_t(char *str)
{
	if ((str[0] == '-' && str[1] >= '0' && str[1] <= '9')
			|| (str[0] >= '0' && str[0] <= '9'))
		return (1);
	return (0);
}

void	ft_tab(int x, int nb1, int nb2)
{
	int	(*tab[5])(int, int);
	int	result;

	tab[0] = &ft_add;
	tab[1] = &ft_sub;
	tab[2] = &ft_mul;
	tab[3] = &ft_div;
	tab[4] = &ft_mod;
	result = tab[x](nb1, nb2);
	ft_putnbr(result);
	ft_putchar('\n');
}

void	ft_pr(char *str)
{
	ft_putnbr(ft_atoi(str));
	ft_putchar('\n');
}

int		main(int ac, char **av)
{
	if (ac == 4)
	{
		if (ft_op(av[2]) == 0 || (ft_is_t(av[1]) == 0 && ft_is_t(av[3]) == 0))
			write(1, "0\n", 2);
		else if (ft_is_t(av[1]) == 0)
			ft_pr(av[3]);
		else if (ft_is_t(av[3]) == 0)
			ft_pr(av[1]);
		else if (av[2][0] == '/' && av[2][1] == '\0' && ft_atoi(av[3]) == 0)
			ft_putstr("Stop : division by zero\n");
		else if (av[2][0] == '%' && av[2][1] == '\0' && ft_atoi(av[3]) == 0)
			ft_putstr("Stop : modulo by zero\n");
		else if (av[2][0] == '+' && av[2][1] == '\0')
			ft_tab(0, ft_atoi(av[1]), ft_atoi(av[3]));
		else if (av[2][0] == '-' && av[2][1] == '\0')
			ft_tab(1, ft_atoi(av[1]), ft_atoi(av[3]));
		else if (av[2][0] == '*' && av[2][1] == '\0')
			ft_tab(2, ft_atoi(av[1]), ft_atoi(av[3]));
		else if (av[2][0] == '/' && av[2][1] == '\0')
			ft_tab(3, ft_atoi(av[1]), ft_atoi(av[3]));
		else if (av[2][0] == '%' && av[2][1] == '\0')
			ft_tab(4, ft_atoi(av[1]), ft_atoi(av[3]));
	}
	return (0);
}
