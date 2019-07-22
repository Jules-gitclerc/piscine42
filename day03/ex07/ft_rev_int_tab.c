/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julclerc <julclerc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/04 19:20:36 by julclerc          #+#    #+#             */
/*   Updated: 2019/07/05 15:53:34 by julclerc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int i;
	int s;

	if ((size % 2) == 1)
	{
		i = (size - 1) / 2;
	}
	else
		i = size / 2;
	while (i > 0)
	{
		s = tab[size - i];
		tab[size - i] = tab[i - 1];
		tab[i - 1] = s;
		i--;
	}
}
