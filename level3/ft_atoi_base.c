int	ft_atoi_base(const char *str, int str_base)
{
	int i = 0;
	int signe = 1;
	int res = 0;

	if (str[i] == '-')
	{
		signe = -1;
		i++;
	}
	while (str[i])
	{
		res *= str_base;
		if (str[i] >= '0' && str[i] <= '9')
			res += str[i] - '0';
		else if (str[i] >= 'a' && str[i] <= 'z')
			res += str[i] - 'a' + 10;
		else if (str[i] >= 'A' && str[i] <= 'Z')
			res += str[i] - 'A' + 10;
		else
			return (0);
		i++;
	}
	return (signe * res);
}


/* #include <stdio.h>

int main(void)
{
    const char *str1 = "1A";
    const char *str2 = "-1A";
    const char *str3 = "101";
    const char *str4 = "-101";

    int base16 = 16;
    int base2 = 2;

    printf("String: %s, Base: %d, Result: %d\n", str1, base16, ft_atoi_base(str1, base16)); // 26 en base 16
    printf("String: %s, Base: %d, Result: %d\n", str2, base16, ft_atoi_base(str2, base16)); // -26 en base 16
    printf("String: %s, Base: %d, Result: %d\n", str3, base2, ft_atoi_base(str3, base2));   // 5 en base 2
    printf("String: %s, Base: %d, Result: %d\n", str4, base2, ft_atoi_base(str4, base2));   // -5 en base 2

    return 0;
} */
