#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
    int n1;
    int n2;
    int op;

    if (ac == 4)
    {
        n1 = atoi(av[1]);
        n2 = atoi(av[3]);
        op = av[2][0];
        if (op == '+')
            printf("%d", n1 + n2);
        else if (op == '-')
            printf("%d", n1 - n2);
        else if (op == '*')
            printf("%d", n1 * n2);
        else if (op == '/')
            printf("%d", n1 / n2);
        else if (op == '%')
            printf("%d", n1 % n2);
    }
    printf("\n");
    return (0);
}

