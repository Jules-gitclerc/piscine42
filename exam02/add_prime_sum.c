
#include <unistd.h>


int	ft_is_space(char *str, int i)
{
	if (str[i] == '\t' || str[i] == ' ' || str[i] == '\n'
			|| str[i] == '\f' || str[i] == '\r' || str[i] == '\v')
		return (1);
	else
		return (0);
}

int	ft_atoi(char *str)
{
	int i;
	int j;
	int k;
	int compteur;

	i = 0;
	j = 1;
	k = 0;
	compteur = 0;
	while (ft_is_space(str, i) == 1)
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '+')
			i++;
		else if (str[i++] == '-')
			compteur++;
	}
	if ((compteur % 2) != 0)
		j = -j;
	while ('0' <= str[i] && str[i] <= '9')
		k = (k * 10) + (str[i++] - 48);
	return (j * k);
}


void    ft_putchar(char c)
{
    write(1, &c, 1);
}

int	ft_is_prime(int nb)
{
	int i;

	i = 2;
	if (nb < 2)
		return (0);
	while (i * i <= nb && i * i > 0)
		if (nb % i == 0)
			return (0);
		else
			i++;
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (ft_is_prime(nb))
		return (nb);
	return (ft_find_next_prime(nb - 1));
}


int main(int ac, char **av)
{
    int x;

    x = 0;
   if(ac > 1)
   {
       x = ft_atoi(av[1]) + ft_find_next_prime(ft_atoi(av[1]));
   }
   ft_putchar(x);
}