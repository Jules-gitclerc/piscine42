/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julclerc <julclerc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 13:49:36 by julclerc          #+#    #+#             */
/*   Updated: 2019/07/22 15:47:01 by julclerc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_next_sep(char *str, char *to_find)
{
	int i;
	int n;

	i = 0;
	if (to_find[0] == '\0')
		return (-1);
	while (str[i])
	{
		n = 0;
		while (to_find[n])
		{
			if (to_find[n] == str[i])
				return (i);
			n++;
		}
		i++;
	}
	return (-1);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src, int n)
{
	char	*re;
	int		i;

	if (!(re = malloc(sizeof(*re) * (ft_strlen(src) + 1))))
		return (0);
	i = 0;
	while (i < n)
	{
		re[i] = src[i];
		i++;
	}
	re[i] = '\0';
	return (re);
}

int		ft_count(char *str, char *charset)
{
	int i;
	int j;
	int n;

	i = 0;
	n = 0;
	while (i < ft_strlen(str))
	{
		j = ft_next_sep(&str[i], charset);
		if (j > 0)
			n++;
		else if (j == -1 && str[i])
		{
			j = 1;
			n++;
			break ;
		}
		i = i + j + 1;
	}
	return (n);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		n;
	char	**re;

	if (!(re = (char**)malloc(sizeof(char*) * (ft_count(str, charset) + 1))))
		return (0);
	i = 0;
	n = 0;
	while (i < ft_strlen(str))
	{
		if (ft_next_sep(&str[i], charset) > 0)
		{
			re[n] = ft_strdup(&str[i], ft_next_sep(&str[i], charset));
			n++;
		}
		else if (ft_next_sep(&str[i], charset) == -1)
		{
			re[n] = ft_strdup(&str[i], ft_strlen(&str[i]));
			n++;
			break ;
		}
		i = i + ft_next_sep(&str[i], charset) + 1;
	}
	re[ft_count(str, charset)] = 0;
	return (re);
}
