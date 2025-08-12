#include <stdio.h>
#include <stdbool.h>

int main()
{
    short a = 10;
    double b = 45.9;
    char c = '$';
    bool d = true;

    printf("\nLocalidade na memoria\n");
    printf("%p\n", &a);
    printf("%p\n", &b);
    printf("%p\n", &c);
    printf("%p\n", &d);

    printf("\nVerificar o tamanho em bytes\n");
    printf("a: %zu\n", sizeof(a));
    printf("b: %zu\n", sizeof(b));
    printf("c: %zu\n", sizeof(c));
    printf("d: %zu\n", sizeof(d));
    
    return 0;
}
