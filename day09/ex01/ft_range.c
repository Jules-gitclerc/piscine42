/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julclerc <julclerc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/14 14:19:45 by julclerc          #+#    #+#             */
/*   Updated: 2019/07/17 21:26:12 by julclerc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int *tmp;
	int i;

	if (min >= max || !(tmp = malloc(sizeof(int) * (max - min))))
		return (NULL);
	i = 0;
	while (min < max)
		tmp[i++] = min++;
	return (tmp);
}
