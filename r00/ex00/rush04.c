/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alchaler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/07 15:32:25 by alchaler          #+#    #+#             */
/*   Updated: 2018/07/08 16:30:09 by alchaler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	rush(int x, int y)
{
	int	lig;
	int	col;

	lig = 1;
	while (lig <= y && !(x <= 0 || y <= 0))
	{
		col = 1;
		while (col <= x)
		{
			if ((col == 1 && lig == 1) ||
				(col == x && lig == y && x != 1 && y != 1))
				ft_putchar('A');
			else if ((col == x && lig == 1) || (col == 1 && lig == y))
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
