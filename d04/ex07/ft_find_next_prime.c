/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcreux <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 16:41:35 by jcreux            #+#    #+#             */
/*   Updated: 2018/07/10 02:51:33 by jcreux           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int div;
	int nb_div;

	div = 1;
	nb_div = 0;
	while (div <= nb)
	{
		if (nb % div == 0 && nb != 0 && nb != 1)
			nb_div++;
		div++;
	}
	if (nb_div == 2)
		return (1);
	return (0);
}

int		ft_find_next_prime(int nb)
{
	int i;

	i = 0;
	while (i != 1)
	{
		if (ft_is_prime(nb) == 1)
			i = 1;
		nb++;
	}
	return (nb - 1);
}
