#include <unistd.h>

void expand_str(char *str)
{
    int i = 0;

    while (str[i] == ' ' || str[i] == '\t')
        i++;
    while (str[i])
    {
        if (str[i] == ' ' || str[i] == '\t')
        {
            if (str[i + 1] > ' ' && str[i])
                write(1, "   ", 3);
        }
        else
            write(1, &str[i], 1);
        i++;
    }
}

int main(int ac, char **av)
{
    if (ac == 2)
        expand_str(av[1]);
    write(1, "\n", 1);
    return(0);
}