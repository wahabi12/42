#include <stdio.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
    int i = 0;
    int j = 0;

    while (s[i])
    {
        j = 0;
        while (reject[j])
        {
            if (s[i] == reject[j])
                return (i);
            j++;
        }
        i++;
    }
    return (i);
}


/* int main()
{
    const char *str = "baonjour, moande";
    const char *reject_chars = "aeiou";
    size_t index;

    index = ft_strcspn(str, reject_chars);
    printf("La longueur du segment initial sans les caractères de rejet est : %zu\n", index);

    return 0;
} */