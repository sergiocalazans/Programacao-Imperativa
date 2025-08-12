#include <stdio.h>

int main()
{
    int temperatura = 20;
    temperatura = -10;
    unsigned int idade = 30;
    idade = 40;
    printf("%d %d\n", temperatura,
           idade);
    printf("%zu\n", sizeof(int));
    return 0;
}
