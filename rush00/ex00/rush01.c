/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julclerc <julclerc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/06 09:19:18 by julclerc          #+#    #+#             */
/*   Updated: 2019/07/06 17:14:24 by julclerc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	put_line(int x, char j, char k, char l)
{
	int i;

	i = 1;
	ft_putchar(j);
	while (i++ < x - 1)
	{
		ft_putchar(k);
	}
	if (x >= 2)
	{
		ft_putchar(l);
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int i;

	i = 1;
	if (x > 0 && y > 0)
	{
		put_line(x, '/', '*', 92);
		while (++i < y)
		{
			put_line(x, '*', ' ', '*');
		}
		if (y >= 2)
		{
			put_line(x, 92, '*', '/');
		}
	}
}
