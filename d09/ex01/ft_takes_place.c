/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcreux <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 07:07:37 by jcreux            #+#    #+#             */
/*   Updated: 2018/07/13 10:55:27 by jcreux           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_hour(int hour)
{
	if (hour < 12)
		return (hour);
	return (hour - 12);
}

void	ft_am_pm(int hour, int h, int nh)
{
	printf("THE FOLLOWING TAKES PLACE BETWEEN ");
	if (hour < 12)
	{
		if (nh < 12)
			printf("%d.00 A.M. and %d.00 A.M.\n", h, nh);
		else if (nh >= 12)
		{
			if (nh == 12)
				nh = 0;
			printf("%d.00 A.M. and %d.00 P.M.\n", h, nh);
		}
	}
	else if (hour >= 12)
	{
		if (nh < 12)
			printf("%d.00 P.M. and %d.00 P.M.\n", h, nh);
		else if (nh >= 12)
		{
			if (nh == 12)
				nh = 0;
			printf("%d.00 P.M. and %d.00 A.M.\n", h, nh);
		}
	}
}

void	ft_takes_place(int hour)
{
	int h;
	int nh;

	h = ft_hour(hour);
	nh = h + 1;
	if (hour >= 0 && hour < 24)
		ft_am_pm(hour, h, nh);
}
