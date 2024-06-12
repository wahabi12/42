#include <stdio.h>
#include <unistd.h>

void print_bits(unsigned char octet)
{
    int i = 8;
    unsigned char bit = 0;

    while (i--)
    {
        bit = (octet >> i & 1) + '0';
            write(1, &bit, 1);
    }
}

int main()
{
    unsigned char value = 5; // Exemple d'octet à imprimer (00000101)
    
    printf("Bits de %d: ", value);
    print_bits(value);
    printf("\n");

    value = 255; // Autre exemple (11111111)
    
    printf("Bits de %d: ", value);
    print_bits(value);
    printf("\n");

    return 0;
}
