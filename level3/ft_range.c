#include <stdlib.h>

int *ft_range(int start, int end)
{
	int i = 0;
	int len = abs((end - start)) + 1;
	int *res = (int *)malloc(sizeof(int) * len);

	while (i < len)
	{
		if (start < end)
		{
			res[i] = start;
			start++;
			i++;
		}
		else
		{
			res[i] = start;
			start--;
			i++;
		}
	}
        return (res);
}


/* #include <stdio.h>

int *ft_range(int start, int end);

int main(void)
{
    int start = 8;
    int end = 4;
    int *range = ft_range(start, end);
    int len = abs(end - start) + 1;

    if (range == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Range from %d to %d:\n", start, end);
    for (int i = 0; i < len; i++)
    {
        printf("%d ", range[i]);
    }
    printf("\n");

    free(range);

    start = 4;
    end = 8;
    range = ft_range(start, end);
    len = abs(end - start) + 1;

    if (range == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Range from %d to %d:\n", start, end);
    for (int i = 0; i < len; i++)
    {
        printf("%d ", range[i]);
    }
    printf("\n");

    free(range);

    return 0;
}
 */
