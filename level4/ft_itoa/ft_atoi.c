#include <stdio.h>
#include <stdlib.h>

int count_int(int nbr)
{
	int i = 0;

	if (nbr <= 0)
		i = 1;
	while (nbr)
	{
		nbr = nbr / 10;
		i++;
	}
	return (i);
}

char *ft_itoa(int nbr)
{
	int len;
	unsigned int nb;
	char *mem;

	len = count_int(nbr);
	mem = (char *)malloc(sizeof(char ) * len + 1);
	if (!mem)
		return (NULL);
	mem[len--] = '\0';
	if (nbr < 0)
		nb = -nbr;
	else
		nb = nbr;
	while (len >= 0)
	{
		mem[len] = nb % 10 + 48;
		len--;
		nb = nb / 10;
	}
	if (nbr < 0)
		mem[0] = '-';
	return (mem);
}


int main()
{
    int numbers[] = {0, -2147483648, -1234, 1234, 42, -42};
    int num_tests = sizeof(numbers) / sizeof(numbers[0]);

    for (int i = 0; i < num_tests; i++)
    {
        char *result = ft_itoa(numbers[i]);
        if (result)
        {
            printf("ft_itoa(%d) = %s\n", numbers[i], result);
            free(result); // N'oubliez pas de libérer la mémoire allouée
        }
        else
        {
            printf("ft_itoa(%d) failed to allocate memory.\n", numbers[i]);
        }
    }

    return 0;
}
