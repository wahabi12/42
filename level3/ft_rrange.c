#include <stdlib.h>
#include <stdio.h>

/* int *ft_rrange(int start, int end)
{
    int i = 0;
    int n = end - start;
    int *res;
    int step = 1;

    if (n < 0)
        (n *= -1);
    n++;
    res = (int *)malloc(sizeof(int) * n);
    if (res)
    {
        if (start < end)
            step = -1;
        while (i < n)
        {
            res[i] = end;
            end = end + step;
            i++;
        }
    }
    return (res);
} */

int *ft_rrange(int start, int end)
{
    int i = 0;
    int n  = end - start;
    int step = 1;
    int *res;

    if (n < 0)
        (n *= -1);
    n++;
    res = (int *)malloc(sizeof(int) * n);
    if (res)
    {
        if (start < end)
            step = -1;
        while (i < n)
        {
            res[i] = end;
            end = end + step;
            i++;
        }
    }
    return (res);
}


/* int main(void)
{
    int *range;
    int start, end;
    int i;
    int size;

    start = 1;
    end = 5;

    range = ft_rrange(start, end);
    if (range)
    {
        size = (start > end) ? (start - end + 1) : (end - start + 1);
        for (i = 0; i < size; i++)
        {
            printf("%d ", range[i]);
        }
        printf("\n");
        free(range);
    }

    start = 5;
    end = 1;

    range = ft_rrange(start, end);
    if (range)
    {
        size = (start > end) ? (start - end + 1) : (end - start + 1);
        for (i = 0; i < size; i++)
        {
            printf("%d ", range[i]);
        }
        printf("\n");
        free(range);
    }

    return 0;
}
 */
