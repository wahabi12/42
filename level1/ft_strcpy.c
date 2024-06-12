#include <unistd.h>

char    *ft_strcpy(char *s1, char *s2)
{
    int i = 0;

    while (s2[i] != '\0')
    {
        s1[i] = s2[i];
        i++;
    }
    s1[i] = '\0';
    return (s1);
}

int main(void)
{
    char src[] = "Hello, world!";
    char dest[20];

    ft_strcpy(dest, src);
    
    // Affichage pour vérification
    write(1, dest, sizeof(dest));
    
    return 0;
}
