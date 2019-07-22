/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   centaine.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nveron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/21 14:11:57 by nveron            #+#    #+#             */
/*   Updated: 2019/07/21 15:04:18 by nveron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_centaine_2(char *final, unsigned long nbrconv, char *nbr)
{
	char *tmp;

	if (((nbrconv % 100) / 10) != 0 && (nbrconv % 100) > 19)
	{
		if (nbrconv / 100 != 0)
			ft_putchar(1, ' ');
		tmp = ft_itoa((((nbrconv % 100) / 10) * 10));
		ft_print_0_10(final, tmp);
		if ((ft_atoi(nbr) % 10) != 0)
			ft_putchar(1, '-');
	}
	else if (((nbrconv % 100) / 10) != 0 && (nbrconv % 100) <= 19)
	{
		ft_putchar(1, ' ');
		tmp = ft_itoa(nbrconv % 100);
		ft_print_0_10(final, tmp);
		free(tmp);
		return ;
	}
}

void	ft_centaine(char *final, char *nbr)
{
	unsigned long	nbrconv;
	char			*tmp;

	nbrconv = ft_atoi(nbr);
	if (ft_print_0_10(final, nbr) != 1)
	{
		if (nbrconv / 100 != 0)
		{
			tmp = ft_itoa(nbrconv / 100);
			ft_print_0_10(final, tmp);
			free(tmp);
			ft_putchar(1, ' ');
			ft_print_0_10(final, "100");
			if (nbrconv % 10 != 0 && (((nbrconv % 100) / 10) == 0))
				ft_putchar(1, ' ');
		}
		ft_centaine_2(final, nbrconv, nbr);
		if (nbrconv % 10 != 0)
		{
			tmp = ft_itoa(nbrconv % 10);
			ft_print_0_10(final, tmp);
			free(tmp);
			return ;
		}
	}
}

int		ft_check_dict(char *final)
{
	int i;

	i = 0;
	while (final[i])
	{
		while (final[i] <= '9' && final[i] >= '0')
			i++;
		if (final[i] != ' ' && final[i] != ':')
			return (-1);
		while (final[i] == ' ')
			i++;
		if (final[i] != ':')
			return (-1);
		while (final[i] <= '~' && final[i] >= 32)
			i++;
		if (final[i] != '\n')
			return (-1);
		while (final[i] == '\n')
			i++;
	}
	return (1);
}
