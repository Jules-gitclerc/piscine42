 
#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    rot_13(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        if(str[i] >= 'a' && str[i] <= 'm')
            ft_putchar(str[i] + 13);
        else if(str[i] <= 'n' && str[i] >='z')
            ft_putchar(str[i] - 13);
        else if(str[i] >= 'A' && str[i] <= 'M')
            ft_putchar(str[i] + 13);
        else if(str[i] >= 'N' && str[i] <= 'Z')
            ft_putchar(str[i] - 13);
        i++;
    }
}

int main(int ac, char **av)
{
    if (ac > 1)
    {
        rot_13(av[1]);
        return (0);
    }
}