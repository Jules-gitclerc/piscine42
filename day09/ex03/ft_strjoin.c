/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julclerc <julclerc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 15:15:10 by julclerc          #+#    #+#             */
/*   Updated: 2019/07/18 10:23:30 by julclerc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcat2(char *src, int size, char **strs, char *sep)
{
	int j;
	int i;
	int l;
	int sepa;

	l = 0;
	i = 0;
	while (i < size)
	{
		sepa = 0;
		j = 0;
		while (strs[i][j])
			src[l++] = strs[i][j++];
		while (sep[sepa] && i < size - 1)
			src[l++] = sep[sepa++];
		i++;
	}
	src[l] = '\0';
	return (src);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*concat;
	int		i;
	int		mem_len;

	i = 0;
	mem_len = 0;
	while (i < size)
	{
		mem_len += ft_strlen(strs[i]);
		if (i != size - 1)
			mem_len += ft_strlen(sep);
		i++;
	}
	if (!(concat = malloc(sizeof(char) * mem_len + 1)))
		return (0);
	if (size == 0)
		return (concat = "\0");
	concat = ft_strcat2(concat, size, strs, sep);
	return (concat);
}
