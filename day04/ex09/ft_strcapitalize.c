/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julclerc <julclerc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/07 18:50:18 by julclerc          #+#    #+#             */
/*   Updated: 2019/07/08 16:26:53 by julclerc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int i;
	int j;

	i = 0;
	j = 0;
	ft_strlowcase(str);
	while (str[i])
	{
		while ((str[i] >= '0' && str[i] <= '9') ||
				(str[i] >= 'a' && str[i] <= 'z') ||
				(str[i] >= 'A' && str[i] <= 'Z'))
		{
			if (j == 0 && str[j + i] >= 'a' && str[j + i] <= 'z')
				str[j + i] = str[j + i] - 32;
			else if (j != 0 && str[j + i] >= 'A' && str[j + i] <= 'Z')
				str[j + i] = str[j + i] + 32;
			i++;
			j++;
		}
		j = 0;
		i++;
	}
	return (str);
}
