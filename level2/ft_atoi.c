int	ft_atoi(const char *str)
{
    int signe = 1;
    int result = 0;

    while (*str == ' ' || (*str >= 9) && *str <= 13)
        str++;
    if (*str == '-')
        signe = -1;
    if (*str == '+' || *str == '-')
        str++;
    while (*str >= '0' && *str <= '9')
    {
        result = result * 10 + *str - '0';
        str++;
    }
    return (signe * result);
}

/* #include <stdio.h>


int main(void)
{
    const char *test1 = "42";
    const char *test2 = "   -42";
    const char *test3 = "4193 with words";
    const char *test4 = "words and 987";
    const char *test5 = "-91283472332";

    printf("Test 1: %d\n", ft_atoi(test1)); // Expected: 42
    printf("Test 2: %d\n", ft_atoi(test2)); // Expected: -42
    printf("Test 3: %d\n", ft_atoi(test3)); // Expected: 4193
    printf("Test 4: %d\n", ft_atoi(test4)); // Expected: 0 (because the string starts with non-numeric characters)
    printf("Test 5: %d\n", ft_atoi(test5)); // Expected: -2147483648 (or other behavior depending on integer overflow handling)

    return 0;
}
 */