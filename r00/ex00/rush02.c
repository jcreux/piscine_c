/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alchaler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/08 15:57:54 by alchaler          #+#    #+#             */
/*   Updated: 2018/07/08 17:00:50 by alchaler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	rush(int x, int y)
{
	int	lig;
	int col;

	lig = 1;
	while (lig <= y && !(x <= 0 || y <= 0))
	{
		col = 1;
		while (col <= x)
		{
			if ((col == 1 && lig == 1) || (col == x && lig == 1 && x != 1))
				ft_putchar('A');
			else if ((col == 1 && lig == y) || (col == x && lig == y))
				ft_putchar('C');
			else if (lig == 1 || lig == y || col == 1 || col == x)
				ft_putchar('B');
			else
				ft_putchar(' ');
			col++;
		}
		ft_putchar('\n');
		lig++;
	}
}
