#include <stdlib.h>
#include <stdio.h>

char    *ft_strdup(const char *src)
{
    int i = 0;
    int len = 0;
    char *strcpy;

    while (src[len])
        len++;
    strcpy = malloc(sizeof(*strcpy) * (len + 1));
    if (strcpy)
    {
        while (src[i])
        {
            strcpy[i] = src[i];
            i++;
        }
        strcpy[i] = '\0';
    
    }
    return (strcpy);
}



/* int main()
{
    const char *original = "Bonjour, monde!";
    char *duplication = ft_strdup(original);

    if (duplication)
    {
        printf("Chaîne originale : %s\n", original);
        printf("Chaîne dupliquée : %s\n", duplication);
        free(duplication); // N'oubliez pas de libérer la mémoire allouée
    }
    else
    {
        printf("Échec de l'allocation de mémoire\n");
    }

    return 0;
} */