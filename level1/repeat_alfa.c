#include "unistd.h"

void ft_print(char c, int i)
{
    while (i > 0)
    {
        write(1, &c, 1);
        --i;
    }
}

void repeat_alfa(char *str)
{
    while (*str)
    {
        if (*str >= 'a' && *str <= 'z')
            ft_print(*str, *str + 1 - 'a');
       else if (*str >= 'A' && *str <= 'Z')
            ft_print(*str, *str + 1 - 'A');
        write(1, str, 1);
        ++str;
    }
}

int main(int ac, char **av)
{
    if (ac == 2)
        repeat_alfa(av[1]);
    write(1, "\n", 1);
    return (0);
}
