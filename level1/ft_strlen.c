#include <stdio.h>

int	ft_strlen(char *str)
{
	int i = 0;

	while (str[i])
		i++;
	return(i);
}

int main()
{
	// char src[40];
	// char dest[100];

	int len = ft_strlen("This is latifat");
	// ft_strcpy(dest, src);
	printf("Final copied string : %d\n", len);
}