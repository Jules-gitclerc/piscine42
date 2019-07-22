/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julclerc <julclerc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/09 16:15:14 by julclerc          #+#    #+#             */
/*   Updated: 2019/07/11 19:49:41 by julclerc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		check_base(char *base)
{
	int i;
	int j;

	i = 0;
	if (ft_strlen(base) < 2)
		return (0);
	while (base[i])
	{
		if ((base[i] > 31 && base[i] < 48) || (base[i] > 57 && base[i] < 65)
			|| (base[i] > 90 && base[i] < 97) || base[i] > 123)
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int nbbr;
	unsigned int x;

	nbbr = nbr;
	x = ft_strlen(base);
	if (check_base(base))
	{
		if (nbr < 0)
		{
			ft_putchar('-');
			nbbr = -nbr;
		}
		else
			nbbr = nbr;
		if (nbbr < x)
			ft_putchar(base[nbbr]);
		else
		{
			ft_putnbr_base(nbbr / x, base);
			ft_putnbr_base(nbbr % x, base);
		}
	}
}

int	main()
{
	ft_putnbr_base(256, "01234567");
	return 0;
}
