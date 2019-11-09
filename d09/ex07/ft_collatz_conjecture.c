/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_collatz_conjecture.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcreux <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 09:39:09 by jcreux            #+#    #+#             */
/*   Updated: 2018/07/13 10:43:49 by jcreux           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_collatz_conjecture(unsigned int base)
{
	int i;

	if (base == 1 || base == 0)
		return (0);
	else
	{
		i = 1;
		if (base % 2 == 0)
			return (i + ft_collatz_conjecture(base / 2));
		return (i + ft_collatz_conjecture((base * 3) + 1));
	}
}
