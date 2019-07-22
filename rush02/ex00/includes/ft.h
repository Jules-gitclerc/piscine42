/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nveron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 16:35:55 by nveron            #+#    #+#             */
/*   Updated: 2019/07/21 19:26:32 by nveron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <unistd.h>
# include <string.h>
# include <errno.h>
# include <libgen.h>
# include <stdlib.h>

int				ft_check_dict(char *final);
int				ft_check(char *str, int i, char *nbr);
int				ft_print_0_10(char *final, char *nbr);
int				main(int argc, char **argv);
int				ft_main_2(int argc, char **argv);
int				ft_decoupage2(unsigned long div,
				unsigned long temp, char *final, int n);
int				ft_strlen(char *str);
void			ft_raccourcie2(char *final, char *str);
void			ft_raccourcie3(char *final, char *str);
void			ft_racourcie(int argc, char **argv, char *buff);
void			ft_centaine_2(char *final, unsigned long nbrconv, char *nbr);
void			ft_centaine(char *final, char *nbr);
void			ft_putchar(int out, char c);
void			ft_putstr(int out, char *str);
void			ft_error_message(char **argv, int i);
void			ft_error(int i, char **argv, int argc);
void			ft_decoupage(char *final, char *nbr2);
char			*ft_size(char *old, char *buff);
char			*ft_itoa(unsigned long nb);
long long		ft_atoi(char *str);
unsigned long	len(long nb);
#endif
