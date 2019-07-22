#include <unistd.h>

void    ft_putchar(char c)
{
    write (1, &c, 1);
}

void   reapeat_alpha(char str)
{
    int i;
    int x;
    
    i = 0;
    if (str >= 'a' && str <= 'z')
        x = str - 'a' + 1;
    else if (str >= 'A' && str <= 'Z')
        x = str - 'A' + 1;
    else
        x = 1;
        while (i < x)
        {
            ft_putchar(str);
            i++;
        }
}

int main(int ac, char **av)
{
    int i;

    i = 0;
    if (ac == 2)
    {
        while (av[1][i])
        {
            reapeat_alpha(av[1][i]);
            i++;
        }
    }
    ft_putchar('\n');
    return 0;
}