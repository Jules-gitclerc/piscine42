/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julclerc <julclerc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 11:57:00 by julclerc          #+#    #+#             */
/*   Updated: 2019/07/20 13:40:47 by julclerc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int					ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char				*ft_strdup(char *src)
{
	char *tmp;
	char *dest;

	if (!(dest = malloc(sizeof(char) * (1 + ft_strlen(src)))))
		return (0);
	tmp = dest;
	while (*src)
		*tmp++ = *src++;
	*tmp = '\0';
	return (dest);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str *re;

	i = 0;
	if (!(re = malloc(sizeof(t_stock_str) * (ac + 1))))
		return (NULL);
	while (i < ac)
	{
		re[i].size = ft_strlen(av[i]);
		re[i].str = av[i];
		re[i].copy = ft_strdup(av[i]);
		i++;
	}
	re[i].str = 0;
	return (re);
}
