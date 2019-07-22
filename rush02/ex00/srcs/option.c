/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   option.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nveron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 15:01:26 by nveron            #+#    #+#             */
/*   Updated: 2019/07/21 14:11:37 by nveron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include <stdio.h>

void	ft_putstr(int out, char *str)
{
	int i;

	i = 0;
	while (str[i])
		ft_putchar(out, str[i++]);
}

void	ft_error_message(char **argv, int i)
{
	ft_putstr(2, "Rush-02: ");
	ft_putstr(2, argv[i]);
	ft_putstr(2, ": No such file or directory");
}

int		ft_check(char *str, int i, char *nbr)
{
	int j;

	j = 0;
	if (i != 0)
		if (str[i - 1] >= '0' && str[i - 1] <= '9')
			return (0);
	while (nbr[j])
	{
		if (nbr[j] != str[i])
			return (0);
		i++;
		j++;
	}
	if (nbr[j] == '\0' && (str[i] == ' ' || str[i] == ':'))
		return (1);
	else
		return (0);
}

void	ft_raccourcie2(char *final, char *str)
{
	if (ft_print_0_10(final, str) == 1)
		return ;
	else
		ft_decoupage(final, str);
}

void	ft_racourcie(int argc, char **argv, char *buff)
{
	int		size;
	char	*final;
	int		fd;

	if (!(final = malloc(1)))
		return ;
	if (argc == 2)
		fd = open("numbers.dict", O_RDONLY);
	else
		fd = open(argv[1], O_RDONLY);
	while ((size = read(fd, buff, 49)) > 0)
	{
		buff[size] = '\0';
		final = ft_size(final, buff);
	}
	if (ft_check_dict(final) < 0)
		ft_putstr(2, "Dict Error");
	else if (argc == 2)
		ft_raccourcie2(final, argv[1]);
	else
		ft_raccourcie2(final, argv[2]);
	free(final);
	return ;
}
