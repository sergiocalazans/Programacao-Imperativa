#include <stdio.h>
int main()
{
    short temperatura = 20;
    temperatura = -10;
    unsigned short idade = 30;
    idade = 40;

    printf("\nTemperatura e idade em decimal:\n");
    printf("%d %d\n", temperatura, idade);

    printf("\nVerificar o tamanho em bytes\n");
    printf("%zu\n", sizeof(short));
    printf("%zu\n", sizeof(temperatura));
    printf("%zu\n", sizeof(idade));
    return 0;
}
