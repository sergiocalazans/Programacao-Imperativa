#include <stdio.h>
int main()
{
    short temperatura = 20;
    temperatura = -10;
    unsigned short idade = 30;
    idade = 40;
    printf("%d %d\n", temperatura, idade);
    printf("%zu\n", sizeof(short));
    return 0;
}
