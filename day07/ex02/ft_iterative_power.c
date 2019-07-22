/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julclerc <julclerc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 15:53:16 by julclerc          #+#    #+#             */
/*   Updated: 2019/07/14 10:25:53 by julclerc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int i;
	int x;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	i = -1;
	x = 1;
	while (++i < power)
		x *= nb;
	return (x);
}
