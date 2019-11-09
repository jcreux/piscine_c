/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcreux <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/11 05:37:18 by jcreux            #+#    #+#             */
/*   Updated: 2018/07/17 10:41:02 by jcreux           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int				diff;
	unsigned int	i;

	i = 0;
	while (i < n - 1 && s1[i] == s2[i])
	{
		i++;
	}
	diff = s1[i] - s2[i];
	return (diff);
}
