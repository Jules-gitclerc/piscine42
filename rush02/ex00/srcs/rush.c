/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nveron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/21 14:04:36 by nveron            #+#    #+#             */
/*   Updated: 2019/07/21 14:34:07 by nveron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		ft_decoupage2(unsigned long div, unsigned long temp, char *final, int n)
{
	if (n == 0)
		ft_putchar(1, ' ');
	ft_centaine(final, ft_itoa(temp));
	n = 0;
	if (div > 1)
	{
		ft_putchar(1, ' ');
		ft_print_0_10(final, ft_itoa(div));
	}
	return (n);
}

void	ft_decoupage(char *final, char *nbr2)
{
	int				n;
	long long		nbr;
	unsigned long	div;
	unsigned long	temp;

	n = 1;
	nbr = ft_atoi(nbr2);
	div = 1000000000000000000;
	if (nbr == -1)
	{
		write(2, "Error\n", 5);
		return ;
	}
	while (div >= 1)
	{
		temp = nbr / div;
		if (temp != 0)
			n = ft_decoupage2(div, temp, final, n);
		nbr = nbr - (temp * div);
		div /= 1000;
	}
}

int		ft_print_0_10_2(char *final, int i)
{
	while (final[i] >= '0' && final[i] <= '9')
		i++;
	while (final[i] == ' ' || final[i] == ':')
		i++;
	while (final[i] != '\n' && (final[i] >= 32 && final[i] < 127))
	{
		if (final[i] == ' ')
			ft_putchar(1, final[i++]);
		while (final[i] == ' ')
			i++;
		ft_putchar(1, final[i++]);
	}
	return (1);
}

int		ft_print_0_10(char *final, char *nbr)
{
	int i;

	i = 0;
	while (final[i])
	{
		if (final[i] == nbr[0])
		{
			if (ft_check(final, i, nbr) == 1)
			{
				ft_print_0_10_2(final, i);
				return (1);
			}
			i++;
		}
		i++;
	}
	return (0);
}

int		main(int argc, char **argv)
{
	ft_main_2(argc, argv);
	ft_putchar(1, '\n');
	return (0);
}
