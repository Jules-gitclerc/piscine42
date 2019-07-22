int atoi(char *str)
{
    int i;
    int nb;
    int negatif;

    i = 0;
    nb = 0;
    negatif = 0;
    if (str[i] == '-')
        return (0);
    if ((str[i] == '\t') || (str[i] == '\n') || (str[i] == '\v') || (str[i] == '\f') || (str[i] == '\r') || (str[i] == ' '))
        i++;
    if (str[i] == '-')
        negatif++;
    if (str[i] == '-' || str[i] == '+')
        i++;
    while (str[i] >= 48 && str[i] <= 57)
    {
        nb = nb * 10;
        nb = nb + str[i] - 48;
        i++;
    }
    if (negatif == 1)
        return (-nb);
    else
        return (nb);
}

#include <stdio.h>

int main(int ac, char **av)
{
    (void)ac;
        printf("%d", atoi(av[1]));
    return (0);
}