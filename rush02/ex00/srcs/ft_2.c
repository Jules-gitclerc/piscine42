/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_2.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nveron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/21 14:09:38 by nveron            #+#    #+#             */
/*   Updated: 2019/07/21 14:11:05 by nveron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_putchar(int out, char c)
{
	write(out, &c, 1);
}

char	*ft_size(char *old, char *buff)
{
	int		i;
	int		j;
	char	*new;

	i = 0;
	new = malloc((sizeof(char) * (ft_strlen(buff) + ft_strlen(old + 1))));
	if (new == NULL)
		return (NULL);
	while (old[i])
	{
		new[i] = old[i];
		i++;
	}
	free(old);
	j = 0;
	while (buff[j])
		new[i++] = buff[j++];
	new[i] = '\0';
	return (new);
}

void	ft_error(int i, char **argv, int argc)
{
	int			fd;
	long int	size;
	char		buff[50];

	if (argc >= 2)
		return ;
	fd = open(argv[i], O_RDONLY);
	while ((size = read(0, buff, 49)))
	{
		buff[size] = '\0';
		ft_putstr(1, buff);
	}
	close(fd);
}

int		ft_main_2(int argc, char **argv)
{
	int			fd;
	char		*buff;
	long int	size;
	int			i;

	i = 1;
	ft_error(1, argv, argc);
	if (!(buff = malloc(50)))
		return (0);
	if (argc == 2)
		fd = open("numbers.dict", O_RDONLY);
	else
		fd = open(argv[1], O_RDONLY);
	if (fd == -1)
		ft_error_message(argv, i);
	else
	{
		if ((size = read(fd, buff, 49)) > 0)
			ft_racourcie(argc, argv, buff);
		else
			ft_error_message(argv, i);
	}
	i++;
	return (0);
}
