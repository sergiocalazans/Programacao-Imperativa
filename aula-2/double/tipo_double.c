#include <stdio.h>

int main()
{
    double PI = 3.14;
    double raio = 10.0;
    double area = PI * raio * raio;
    printf("Area: %f\n", area);

    printf("\nLocalidade da memoria\n");
    printf("%p\n", &area);
    printf("%p\n", &raio);
    printf("%p\n", &PI);

    // sizeof para imprimir o tamanho em bytes
    /*
    %zu é um especificador de formato usado com a função printf para imprimir valores do tipo size_t. 
    size_t é um tipo inteiro sem sinal definido pelo sistema, 
    normalmente usado para representar tamanhos de objetos ou índices em matrizes. 
    */
    printf("\nVerificar o tamanho em bytes\n");
    printf("Tipo double: %zu\n", sizeof(double));
    printf("PI: %zu\n", sizeof(PI));
    printf("Raio: %zu\n", sizeof(raio));
    printf("Area: %zu\n", sizeof(area));
    return 0;
}