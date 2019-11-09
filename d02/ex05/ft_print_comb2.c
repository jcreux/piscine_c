/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcreux <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/05 12:28:48 by jcreux            #+#    #+#             */
/*   Updated: 2018/07/05 21:54:20 by jcreux           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c);

void	ft_print_comb2(void)
{
	int fst_num;
	int snd_num;

	fst_num = 0;
	snd_num = 1;
	while (fst_num <= 98)
	{
		while (snd_num <= 99)
		{
			ft_putchar((fst_num / 10) + '0');
			ft_putchar((fst_num % 10) + '0');
			ft_putchar(' ');
			ft_putchar((snd_num / 10) + '0');
			ft_putchar((snd_num % 10) + '0');
			if (fst_num < 98)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			snd_num++;
		}
		fst_num++;
		snd_num = fst_num + 1;
	}
}
