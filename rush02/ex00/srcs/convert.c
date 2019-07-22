/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nveron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/21 14:05:08 by nveron            #+#    #+#             */
/*   Updated: 2019/07/21 14:09:25 by nveron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

long long		ft_atoi(char *str)
{
	int				i;
	unsigned long	result;
	int				check;

	check = -1;
	result = 0;
	i = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (check == -1)
			check = 0;
		if (result >= 922337203685477580 && check >= 0)
			return (-1);
		result = (result * 10) + str[i] - '0';
		i++;
	}
	if ((str[i] < '0' || str[i] > '9') && str[i] != '\0')
		return (-1);
	if (result <= 9223372036854775807 && check >= 0)
		return (result);
	return (-1);
}

unsigned long	len(long nb)
{
	int len;

	len = 0;
	if (nb < 0)
	{
		nb = nb * -1;
		len++;
	}
	while (nb > 0)
	{
		nb = nb / 10;
		len++;
	}
	return (len);
}

char			*ft_itoa(unsigned long nb)
{
	char			*str;
	unsigned long	n;
	int				i;

	n = nb;
	i = len(n);
	if (!(str = (char*)malloc(sizeof(char) * (i + 1))))
		return (NULL);
	str[i--] = '\0';
	if (n == 0)
	{
		str[0] = 48;
		return (str);
	}
	while (n > 0)
	{
		str[i] = 48 + (n % 10);
		n = n / 10;
		i--;
	}
	return (str);
}
