/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcreux <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 04:12:12 by jcreux            #+#    #+#             */
/*   Updated: 2018/07/10 02:51:00 by jcreux           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int div;

	div = 2;
	if (nb <= 0 || nb == 1)
		return (0);
	while (div <= nb / 2)
	{
		if (nb % div == 0)
			return (0);
		div++;
	}
	return (1);
}