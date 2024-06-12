int	ft_atoi_base(const char *str, int str_base)
{
    int res = 0;
    int i = 0;
    int sig = 1;

    if (str[i] == '-')
    {
        sig = -1;
        i++;
    }
    while (str[i])
    {
        res *= str_base;
        if (str[i] >= '0' || str[i] <= '9')
            res += str[i] - '0';
        else if (str[i] >= 'A' || str[i] <= 'Z')
            res += str[i] - '7';
        else if (str[i] >= 'a' || str[i] <= 'z')
            res += str[i] - 'W';
        i++;
    }
    return (sig * res);
}