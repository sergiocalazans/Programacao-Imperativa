#include <stdio.h>

int main()
{
    int temperatura = 20;
    temperatura = -10;

    // elimina o bit de sinal, dobrando o intervalo de implementação
    unsigned int idade = 30;
    idade = 40;

    printf("\nTemperatura e idade em decimal:\n");
    printf("%d %d\n", temperatura, idade);

    printf("\nVerificar o tamanho em bytes\n");
    printf("%zu\n", sizeof(int));
    printf("%zu\n", sizeof(temperatura));
    printf("%zu\n", sizeof(idade));

    printf("\nTemperatura em hexa: %x\n", temperatura);
    printf("Idade em hexa: %x\n", idade);

    return 0;
}
