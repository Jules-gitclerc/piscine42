/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julclerc <julclerc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/09 13:23:39 by julclerc          #+#    #+#             */
/*   Updated: 2019/07/14 14:18:45 by julclerc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int i;
	int out;
	int x;

	x = 0;
	i = 0;                                                                                                                                                                                                                            0
	out = 0;
	while ((str[i] > 8 && str[i] < 14) || str[i] == ' ')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			x++;
		i++;
	}
	while (str[i] > 47 && str[i] < 58 && str[i])
	{
		out += str[i] - 48;
		i++;
		if (str[i] > 47 && str[i] < 58 && str[i])
			out = out * 10;
	}
	return (x % 2 == 0 ? out : -out);
}
