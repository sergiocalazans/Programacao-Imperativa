#include <stdio.h>

int main()
{
    long double PI = 3.14;
    long double raio = 10.0;
    long double area = PI * raio * raio;
    printf("Area: %f\n", area);

    // sizeof para imprimir o tamanho em bytes
    /*
    %zu é um especificador de formato usado com a função printf para imprimir valores do tipo size_t. 
    size_t é um tipo inteiro sem sinal definido pelo sistema, 
    normalmente usado para representar tamanhos de objetos ou índices em matrizes. 
    */
    printf("%zu\n", sizeof(long double));
    printf("%zu\n", sizeof(PI));
    return 0;
} 
