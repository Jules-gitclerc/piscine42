/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julclerc <julclerc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 12:03:54 by julclerc          #+#    #+#             */
/*   Updated: 2019/07/18 20:20:34 by julclerc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int cvbiensepasser;

	if (nb < 0)
	{
		ft_putchar('-');
		cvbiensepasser = -nb;
	}
	else
		cvbiensepasser = nb;
	if (cvbiensepasser < 10)
	{
		ft_putchar(48 + cvbiensepasser);
	}
	else
	{
		ft_putnbr(cvbiensepasser / 10);
		ft_putnbr(cvbiensepasser % 10);
	}
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_show_tab(struct s_stock_str *par)
{
	int i;

	i = 0;
	while (par[i].str != 0)
	{
		ft_putstr(par[i].str);
		ft_putchar('\n');
		ft_putnbr(par[i].size);
		ft_putchar('\n');
		ft_putstr(par[i].copy);
		ft_putchar('\n');
		i++;
	}
}
