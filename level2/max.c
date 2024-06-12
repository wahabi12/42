#include <stdio.h>

int		max(int* tab, unsigned int len)
{
    int result;
    unsigned int i = 0;

    if (len == 0)
        return (0);
    result = tab[i];
    while (i < len)
    {
        if (result < tab[i])
            result = tab[i];
        i++;
    }
    return (result);
}


/* int main()
{
    int tableau[] = {3, 5, 7, 2, 8, -1, 4, 10, 12};
    unsigned int longueur = sizeof(tableau) / sizeof(tableau[0]);

    int max_value = max(tableau, longueur);

    printf("La valeur maximale du tableau est : %d\n", max_value);

    return 0;
} */