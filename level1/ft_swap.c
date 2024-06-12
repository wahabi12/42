#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
    int tem = *a;
    *a = *b;
    *b = tem;
}



int main(void)
{
    int x = 5;
    int y = 10;

    printf("Avant l'échange :\n");
    printf("x = %d, y = %d\n", x, y);

    ft_swap(&x, &y);

    printf("Après l'échange :\n");
    printf("x = %d, y = %d\n", x, y);

    return 0;
}
