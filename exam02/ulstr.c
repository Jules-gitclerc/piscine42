#include <unistd.h>

void    ft_putchar(char c)
{
    write (1, &c, 1);
}

void    ulstr(char *str)
{
    int i;
    char x;

    i = 0;
    while (str[i])
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            x = str[i] - 32;
            ft_putchar(x);
        }
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            x = str[i] + 32;
            ft_putchar(x);
        }
        i++;
    }
}

int main(int ac, char **av)
{
    if (ac > 1)
    {
        ulstr(av[1]);
    }
    ft_putchar('\n');
    return (0);
}