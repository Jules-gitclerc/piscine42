/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julclerc <julclerc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/04 14:01:39 by julclerc          #+#    #+#             */
/*   Updated: 2019/07/18 13:39:45 by julclerc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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
		ft_putnbr(cvbiensepasser % 10 + '0');
	}
}

int main()
{
	ft_putnbr(854544);
	return(0);
}
