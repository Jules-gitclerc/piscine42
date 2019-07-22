/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julclerc <julclerc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 11:14:29 by julclerc          #+#    #+#             */
/*   Updated: 2019/07/17 18:50:39 by julclerc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int len;

	if (min >= max)
		return ((int)(*range = 0));
	len = max - min;
	if (!(*range = malloc(sizeof(int) * len)))
		return (0);
	while (min < max)
	{
		*(*range)++ = min++;
	}
	*range -= len;
	return (len);
}
