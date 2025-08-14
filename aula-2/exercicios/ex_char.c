#include <stdio.h>
int main()
{

    /*
    Faça a representação simbólica da memória do
    sistema para as variáveis definidas no programa
    contido no arquivo tipo_char.c
    */

    char letra = 'A';
    printf("%c\n", letra);
    printf("%d\n", letra);
    letra = letra + 1;
    printf("%c\n", letra);
    printf("%d\n", letra);
    letra = letra / 2;
    printf("%c\n", letra);
    printf("%d\n", letra);

    printf("\nLocalidade na memoria\n");
    printf("%#X\n", &letra);
    
    return 0;
}
