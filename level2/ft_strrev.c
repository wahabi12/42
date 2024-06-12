char    *ft_strrev(char *str)
{
    int i = -1;
    int len = 0;
    char tem;

    while (str[len])
        len++;
    while (++i < len / 2)
    {
        tem = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = tem;
    }
    return (str);
}


/* #include <unistd.h>
#include <stdio.h>
#include <string.h>

int main()
{
    char str[50] = "geek";
    printf("The given string is =%s\n", str);
    printf("After reversing string is =%s", ft_strrev(str));
    write(1, "\n", 1);
    return (0);
} */