/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcreux <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 08:54:55 by jcreux            #+#    #+#             */
/*   Updated: 2018/07/13 09:19:03 by jcreux           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_rot42(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 106)
			str[i] = str[i] + 16;
		else if (str[i] > 106 && str[i] <= 122)
			str[i] = str[i] - 10;
		i++;
	}
	return (str);
}
