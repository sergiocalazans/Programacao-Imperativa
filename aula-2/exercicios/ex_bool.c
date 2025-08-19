#include <stdio.h>
#include <stdbool.h>

int main()
{
    /*
    Exercício 3.3

    Faça a representação simbólica da memória do
    sistema para as variáveis definidas no programa
    contido no arquivo tipo_bool.c
    */

    bool frio = true;
    bool calor = false;
    printf("%d\n", frio);
    printf("%d\n", calor);

    printf("\nLocalidade na memoria\n");
    printf("%X\n", &frio);
    printf("%X\n", &calor);

    return 0;
}
