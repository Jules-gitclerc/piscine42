/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julclerc <julclerc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/08 15:54:08 by julclerc          #+#    #+#             */
/*   Updated: 2019/07/09 10:37:32 by julclerc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int n;

	n = 0;
	i = 0;
	if (to_find[n] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		while (str[i] == to_find[n])
		{
			i++;
			n++;
			if (to_find[n] == '\0')
			{
				i = i - n;
				return (&str[i]);
			}
		}
		i = i - n;
		n = 0;
		i++;
	}
	return (0);
}
