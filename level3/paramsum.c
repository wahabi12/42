#include <unistd.h>

void putnbr(int nbr)
{
    char dig;

    if (nbr >= 10)
        putnbr(nbr / 10);
    dig = (nbr % 10) + '0';
    write(1, &dig, 1);
}

int main(int ac, char **av)
{
    (void)av;

    putnbr(ac - 1);
    write(1, "\n", 1);
    return (0);
}
